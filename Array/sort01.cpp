#include<iostream>
using namespace std;

void Brute(int arr[] , int n){
    int count0 = 0 , count1 = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0){
            count0++;
        }
        else{
            count1++;
        }
    }

    int index = 0;
    for(int i = 0 ; i < count0 ; i++){
        arr[index] = 0;
        index++;
    }
    for(int i = 0 ; i<count1 ; i++){
        arr[index] = 1;
        index++;
    }

}
void TwoPointer(int arr[] , int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        if(arr[start] == 0){
            start++;
        }
        else if(arr[end] == 1){
            end--;
        }
        else{
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
}