#include<iostream>
using namespace std;

int main(){

    cout<<"enter no : ";

    int n;
    cin>>n;

    int count = 1;

    int row = 1;
    while(row<=n){
        int column = 1;
        while(column <= row){
            cout<<count;
            count++;
            column++;

        }
        cout<<endl;
        row++;
    }
}