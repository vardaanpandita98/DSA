#include<iostream>
using namespace std;

bool EvenOrOdd(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

    int n;
    cin>>n;

    if(EvenOrOdd(n)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"no is odd";
    }
}