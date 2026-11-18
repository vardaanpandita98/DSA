//array of size N where N = 2M +1 , has M no's present twice and 1 unique . find the unique no.

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i  = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        ans = ans ^ arr[i]; //a^a is 0 and a^0 is a
    }

    cout<<"Unique Element is : "<<ans;


}