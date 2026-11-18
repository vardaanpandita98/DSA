#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int start , int end, int key){
    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    
    }

    return -1;
}

int Pivot(int arr[] , int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start)/2;

        if(arr[mid] < arr[end]){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }

    return start;
}

int SearchRotated(int arr[], int n, int key) {
    int pivot = Pivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
        return BinarySearch(arr, pivot, n - 1, key);
    else
        return BinarySearch(arr, 0, pivot - 1, key);
}


