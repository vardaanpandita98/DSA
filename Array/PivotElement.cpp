#include<iostream>
using namespace std;

int PivotElement(int arr[] , int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] <= arr[end]){
            end = mid;
        }
        else{
            start = mid + 1;
        }
    }

    return start;
}

