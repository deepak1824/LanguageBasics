#include <stdio.h>




int *p = (unsigned int*)0x8000;

void bubbleSort(int *arr, int arrSize){

    for(int i = 0;i<arrSize;i++)
        for(int j=0;j<arrSize-i-1;j++)
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void InsertionSort(int *arr, int arrSize){

    for(int i = 1;i<arrSize;i++){
        int temp = arr[i];
        while(i>0 && arr[i-1] > temp){
            arr[i] = arr[i-1];
            i = i-1;
        }
        arr[i] = temp;
    }
}


void Merge(int *arr, int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int arr1[n1], arr2[n2];

    for(int i=0;i<n1;i++){
    arr1[i] = arr[start + i];
    }

    for(int j=0;j<n2; j++){
        arr2[j] = arr[mid + 1 + j];
    }

    int i =0, j=0, k=start;

    while(i< n1 && j< n2){
        if(arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = arr1[j];
        i++;
        k++;
    }
    while(i < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}



void MergeSort(int *arr, int start, int end){
    if(start < end){
        int mid = (start + end) / 2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
    }
}

void PrintArray(int *arr, int arrSize){
    int i = 0;
    while(i < arrSize){
        printf("%d ",arr[i++]);
    }
}

int LinearSearch(int *arr, int arrSize, int x){
    for(int i = 0;i<arrSize;i++){
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int BinarySearch(int *arr, int arrSize, int x){

    int start = 0;
    int end = arrSize - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == x)
            return mid;
        
        if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid -1;
    }
    return -1;
}




int main(){

    // int myArr[10] = {13,18,27,56,9,24,90,16,63,71};

    // PrintArray(myArr,10);
    // printf("\n");
    // MergeSort(myArr, 0,9);
    // PrintArray(myArr,10);

    // int ans = BinarySearch(myArr,10, 16);
    // printf("%d ",ans);

    // printf(" %d ",a);
    // printf(" %p ",&a);
    // printf(" %p ",(p+8));
    //  printf(" %d ",*p);

    int a = 3;
    int b = 2;
    b = a++;

    printf("%d",++b);
    



    return 0 ;
}