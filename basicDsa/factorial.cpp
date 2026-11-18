#include<iostream>
using namespace std;

int main(){
    cout<< " enter number :";
    int n;
    cin>>n;
    int fact = 1, num = 1;
    while(num <= n){
        fact  = fact * num;
        num = num + 1;
    }
    cout<<fact;
}