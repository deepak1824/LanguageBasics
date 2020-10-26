#include <iostream>

using namespace std;


int LinearSearch(int *arr,int arrsize, int key){
    for(int i =0;i<arrsize;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 

int iterativebinarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 


int RecursivebinarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return RecursivebinarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return RecursivebinarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 



int main(){

    int arr[5] = {45,7645,78,9,12};
    int key1 = 9;
    int key2 = 16;

    cout << LinearSearch(arr,5,key1) << endl;
    cout << LinearSearch(arr,5,key2) << endl;
    
}