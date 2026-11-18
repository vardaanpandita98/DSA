#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
         char ch = 'A' + n -  row;
        int column  = 1;
        while(column <= row){
            cout<<ch;
            ch++;
            column++;
        }
        cout<<endl;
        row++;
    }
}