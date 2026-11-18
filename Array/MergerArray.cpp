#include<iostream>
using namespace std;

void Merger(int A[] , int n , int B[] , int m , int arr[]){
    int i = 0 , j =  0 , k = 0;
    while(i < n && j < m){
        if(A[i] > B[j]){
            arr[k] = B[k];
            j++;
            k++;
        }
        else{
            arr[k] = A[k];
            i++;
            k++;
        }
    }

    while(i<n){
        arr[k] = A[i];
        i++;
        k++;
    }

    while(j<m){
        arr[k] = B[k];
        j++;
        k++; 
    }
}

void Print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] <<" "; 
    }
}