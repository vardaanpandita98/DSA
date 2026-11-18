#include<iostream>
using namespace std;

void PrintArray(int arr[] ,  int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void AlternateSwap(int arr[] , int n){
    for(int i = 0 ; i<n; i = i+2){
        if(i+1 < n){
           int temp = arr[i];
           arr[i]= arr[i+1];
           arr[i+1] = temp;
        }
    }
}

int main(){
    int size;
    cin>>size;

    int arr[size];

    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }

    

    AlternateSwap(arr , size);
    PrintArray(arr , size);



}