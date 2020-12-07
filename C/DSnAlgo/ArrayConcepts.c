#include <stdio.h>

static int myArr[10] = {13,28,89,25,46,89,36,16,72,9};
static int n = 10;

void TraverseArray(int *arr, int arrSize);

int *InsertInArray(int *arr, int arrSize, int pos, int value);


int main(void){

    
    int *copy;
    // TraverseArray(myArr,n);
    copy = InsertInArray(myArr, n,7,69);
    TraverseArray(copy, 11);
    return 0;
}

void TraverseArray(int *arr, int arrSize){
    printf("The elments of array are-->\n");
    for(int i=0;i<arrSize;i++){
        printf("%d) Array[%d] = %d \n",i+1, i,arr[i]);
    }
}

int *InsertInArray(int *arr, int arrSize, int pos, int value){
    int j = arrSize;
    arrSize = arrSize + 1;
    for(int j=arrSize-1;j>=pos;j--){
        arr[j] = arr[j-1];
    }
    arr[pos-1] = value;
    return arr;
}