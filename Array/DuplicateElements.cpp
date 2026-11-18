#include<iostream>
using namespace std;

int Brute(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }

    return -1;
}

int Count(int arr[] , int n){
    int count[100] = {0};
    for(int i =  0 ; i<100 ;  i++){
        count[arr[i]]++;

    }

    for(int i =  0 ; i<100 ;  i++){
        if(count[i] == 2){
            return arr[i];
        }
    }

    return -1;
}

int XOR(int arr[] , int n){
    int x = 0;
    for(int i = 0 ; i<n ; i++){
        x = x ^ arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        x = x^i;
    }

    return x;
}