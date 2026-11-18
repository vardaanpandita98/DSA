#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int n){
     for(int i = 0 ; i < n ; i++){
        int minIndex = i;
        for(int j = 0; j < n  ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

            int temp  = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
     }
}