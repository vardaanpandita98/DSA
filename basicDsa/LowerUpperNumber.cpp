#include<iostream>
using namespace std;

int main(){

    cout<<" Enter the character: ";
    char ch;
    cin>>ch;

    if(ch >= '0' && ch <= '9'){
        cout<<"value is numeric";
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout<<"value is lower ";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"value is upper";
    }
    else{
        cout<<"value is symbol";
    }
}