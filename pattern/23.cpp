#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row  = 1;
    while(row <= n){
        int space = n - row;
        while(space){
            cout<<" ";
            space--;
        }

        int column = 1;
        while(column <= row){
            cout<< column;
            column++;
        }

        int col = row - 1;
        while(col>=1){
            cout<<col;
            col--;
        }
        cout<<endl;
        row++;
    }
}