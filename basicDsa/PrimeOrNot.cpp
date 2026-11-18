#include<iostream>
using namespace std;

int main(){
    cout<<"enter number : ";
    int n ; 
    cin>>n;

    int num  = 2;

    while(num < n){
        if(n % num == 0){
            cout<<"Not a Prime Number";
            break;
        }
        else{
            num++;
        }
    }
    cout<<"Prime Number";
}