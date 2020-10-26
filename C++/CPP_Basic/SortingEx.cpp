#include <iostream>

using namespace std;

/*
a. Begin from the first element and start comparing two elements.

b. If the element at smaller index is greater swap the element.

c. Increment the index by one and repeat step 'b' for n-1 iteration.

d. Repeat step b and C for n-1 times.

Worst case complexity = О(n^2) and average complexity = О(n^2).
*/

void BubbleSort(int *arr, int arrsize){

    for(int i=0;i<arrsize;i++){
        for(int j=0;j<arrsize-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
Algorithm for implementation of insertion sort is as follows

a. Start from index 1.

b. compare higher index element with all the elements at smaller index.

c. If element at smaller index number is greater than element at higer index than shift the element at smaller index towards right.

d. Store element of higher value in the last index where vacancy is created.

e. Repeating step b, c and d until the array is sorted.

Best case complexity = O(n).

Average case complexity = Worst case complexity = O(n^2).

*/

void InsertionSort(int *arr, int arrsize){

    for(int i=1; i<arrsize;i++){
        int temp = arr[i];
        while(i>0 && arr[i-1] > temp){
            arr[i] = arr[i-1];
            i = i-1;
        }
        arr[i] = temp;
    }
}

/*

Algorithm for implementation of merge sort is as follows

a. Divide the string into two half using formula (start index + end index)/2, where each half have a new start and end index till one element is left in the leaf node.

b. Starting from leaf node traverse the same route backward:

Compare the last two nodes.
Traverse each node whichever element in the node is smaller save the element in the temporary buffer first then save the element of the other node at incremented index in the temporary buffer.
c. Repeat step b until all the elements are copied to the temporary buffer.

d. Store all the elements in the temporary buffer back the main array.

Best case complexity = Average case complexity = Worst case complexity = O(n log n).

*/

void Merge(int *arr, int start, int mid, int end){

    int n1 = mid - start + 1;
    int n2 = end - mid;

    int arr1[n1], arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i] = arr[start+i];
    }

    for(int j=0;j<n2;j++){
        arr2[j] = arr[mid + 1 + j];
    }

    int i=0, j=0, k= start;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            arr[k] = arr1 [i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void MergeSort(int *arr, int start, int end){
    if(start < end){
        int mid = ((start + end)/2);
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
    }
}


/*

Algorithm for implementation of quick sort is as follows

a. Any element can be marked as a pivot but in this algorithm, I am using the starting index as a pivot.

b. Divide the array such that, All the element that are less than pivot are kept in one part and other are kept in another part.

c. Now pivot can be placed at its position between two parts.

d. consider only left part and repeat the steps a, b and c until only one element is left.

e. consider right part and repeat step a, b ,c ,d and e until all the elements are sorted.

Best case complexity = Average case complexity = O(n log n).

Worst case complexity = O(n^2).


*/

void QuickSort(int *arr, int start, int end){
    if(start < end){
        int pivot = start;
        int i = start;
        int j = end;
        while(i < j){
            while(arr[i] <= arr[pivot] && i <= end){
                i++;
            }
            while(arr[j] > arr[pivot] && i >= start){
                j--;
            }
            if(i < j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        QuickSort(arr, start, j-1);
        QuickSort(arr, j+1, end);
    }
}

int main(){

    int arr[5] = {109,23,876,2623,16};

    //BubbleSort(arr,5);
    //InsertionSort(arr,5);
    //MergeSort(arr,0,4);
    QuickSort(arr,0,4);

    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }


}