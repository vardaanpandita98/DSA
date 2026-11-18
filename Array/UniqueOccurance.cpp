#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int freq[100] = {0};
    for(int i = 0 ; i<n ; i++){
        freq[arr[i]]++;
    }

    bool unique = true;

    for(int i = 0 ; i<100 ; i++){
       if(freq[i] == 0){
        continue;
       } 

       for(int j = i + 1; j<100 ; j++ ){
        if(freq[i] == freq[j] && freq[j]!= 0){
            unique = 0;
        }
       }
    }

    if(unique){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}