#include <stdio.h>

static int myArr[10] = {13,28,89,25,46,89,36,16,72,9};


void TraverseArray(int *arr, int arrSize);

int *InsertInArray(int *arr, int arrSize, int pos, int value);

int *DeleteInArray(int *arr, int arrSize, int pos);

void SearchInArray(int *arr, int arrSize, int item);

void UpdateInArray(int *arr, int arrSize, int pos, int value);

int main(void){

    
    int *copy;
    TraverseArray(myArr,10);
    // copy = InsertInArray(myArr, n,7,69);
    // copy = DeleteInArray(copy, 11, 7);
    // SearchInArray(myArr,10,89);
    UpdateInArray(myArr,10,5,100);
    TraverseArray(myArr, 10);
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

int *DeleteInArray(int *arr, int arrSize, int pos){
    int j = pos;

    while(j < arrSize){
        arr[j-1] = arr[j];
        j = j+1;
    }
    arrSize = arrSize - 1;
    return arr;
}

void SearchInArray(int *arr, int arrSize, int item){
    int i = 0;
    while(i < arrSize){
        if(arr[i] == item){
            break;
        }
        i++;
    }
        printf("Found element %d at positon %d \n", item, i+1);
    }


void UpdateInArray(int *arr, int arrSize, int pos, int value){
    arr[pos-1] = value;
}