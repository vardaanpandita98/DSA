#include<iostream>
using namespace std;

void FindPair(int arr[] , int n , int k){
    for(int i = 0 ;  i<n ; i++){
        for(int j = i+1 ; j<n ;j++){
            if(arr[i] + arr[j] ==k ){
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    FindPair(arr, n, k);

    return 0;
}