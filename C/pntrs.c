#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>




void bubbleSort(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void insertionSort(int *arr, int size){

    for(int i=1;i<size;i++){
        int temp = arr[i];
        while(i >0 && arr[i-1] > temp){
            arr[i] = arr[i-1];
            i = i-1;
        }
        arr[i] = temp;
    }
}



void Merge(int *arr, int start, int mid, int end){

    int n1 = mid - start + 1;
    int n2 = end - mid;

    int a1[n1], a2[n2];

    for(int i=0;i<n1;i++){
        a1[i] = arr[start + i];
    }
    for(int j=0;j<n2;j++){
        a2[j] = arr[mid+1+j];
    }

    int i=0, j=0, k=start;
    while(i<n1 && j<n2){
        if(a1[i] <= a2[j]){
            arr[k] = a1[i];
            i++;
        }
        else{
            arr[k] = a2[j];
            j++;
        }
        k++;
    } 
    while(i < n1){
        arr[k] = a1[i];
        i++;
        k++;
    }
    while(j< n2){
        arr[k] = a2[j];
        j++;
        k++;
    }
}


void MergeSort(int *arr, int start, int end){
    if(start < end){
        int mid = (start + end) /2;
        MergeSort(arr, start, mid);
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
    }

}

void QuickSort(int *arr, int start, int end){
    if(start < end){
        int pivot = start;
        int i = start;
        int j =end;
        while(i < j){
            while(arr[i] <= arr[pivot] && i <=end){
                i++;
            }
            while(arr[j] > arr[pivot] && i>= start){
                j--;
            }
            if(i<j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        QuickSort(arr,start,j-1);
        QuickSort(arr, j+1, end);
    }
}



int LinearSearch(int *arr, int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int *arr, int size, int key){
    int start = 0;
    int end = size-1;

    while(start < end){
        int mid = (start + end)/2;

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int checkIndianess(){
    unsigned int a = 0x01;
    return (*(char*) & a);
}   

int main(){

    // int x = 5;
    int *p;

    // printf("value at x %d\n",x);
    // printf("value at x %p\n",p);
    // printf("value at x %d\n",*p);
    // printf("value at x %p\n",&x);

    // printf("Address \t Name \t Value \n");
    // printf("%p \t %s \t %d \n",p,"x variable",x); // variable's info
    // printf("%p \t %s \t %p \n",&p,"x variable",p); // pointer's info
    
    

    // printf("\n*p: %d \n",*p);    //dereferencing a pointer

    // *p = 757;

    // printf("\n*p: %d \n",*p);
    // printf("\nx: %d \n",x);
    // p = (int*)0x1000;

    // int *p1 = p+4;
    // int *p2 = p1+4;

    // printf("Value pointed by p %d \n",*p);
    // printf("Value pointed by p1 %d \n",*p1);
    // printf("Value pointed by p2 %d \n",*p2);

    // printf("p-> %p \n",p);
    // printf("p1->%p \n",p1);
    // printf("p2->%p \n",p2);


    int arr[5] = {561,891,2,35,78};

    // bubbleSort(arr, 5);
    // insertionSort(arr, 5);
    // MergeSort(arr, 0, 4);
    // QuickSort(arr, 0,4);

    // for(int i = 0;i<5;i++){
        // printf("%d ", LinearSearch(arr, 5, 2));
        printf("%d ",checkIndianess());
    // }
    return 0;
}