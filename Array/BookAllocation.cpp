#include<iostream>
using namespace std;

bool IsPossible(int arr[] , int n , int m , int mid){
    int StudentCount = 1;
    int SumOfPages = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] + SumOfPages <= arr[mid]){
            SumOfPages += arr[i];
        }

        else{
            StudentCount++;
            SumOfPages = arr[i];
        }

        if(StudentCount > m || arr[i] > arr[mid]){
            return false;
        }
    }

    return true;
}

int AllocateBooks(int arr[] , int n , int m){
    int start = 0;
    int sum = 0;
    for(int i = 0  ; i<n ; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(IsPossible(arr , n , m , mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}