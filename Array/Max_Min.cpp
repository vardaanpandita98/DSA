#include<iostream>
using namespace std;

int main(){

    int arr[5];
    for(int i = 0 ;  i<5 ; i++){
        cin>>arr[i];
    }

    int mini = INT16_MAX;
    for(int i = 0 ;  i<5 ; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
        cout<<mini<<endl;

    int maxi = INT16_MIN;
    for(int i = 0  ; i<5 ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout<<maxi<<endl;
}