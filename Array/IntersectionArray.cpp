#include<iostream>
using namespace std;

void Brute(int A[] , int n ,  int B[] , int m){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ;  j++){
            if(A[i] == B[j]){
                cout<<A[i]<<" ";
                break;
            }
        }
    }
}

void Intersection(int A[] , int n ,  int B[] , int m){
    int i = 0 ,  j = 0;
    while(i<n && j<m){
        if(A[i] == B[j]){
            cout<<A[i]<<" ";
            i++;
            j++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            i++;
        }
    }
}