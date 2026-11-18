#include<iostream>
using namespace std;

int main(){
    cout<<"Enter A & B : ";
    int a , b;
    cin>>a>>b;

    if(a>b){
        cout<<"A is greater than B";
    }
    else if(a<b){
        cout<<"B is Greater than A";
    }
    else{
        cout<<"A is equal to B";
    }
}