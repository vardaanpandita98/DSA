#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a Number :"<<endl;
    int n;
    cin>>n;

    if(n>0){
        cout<<"POSITIVE";
    }
    else if(n<0){
        cout<<"NEGETIVE";
    }
    else{
        cout<<"Number is Zero";
    }
}