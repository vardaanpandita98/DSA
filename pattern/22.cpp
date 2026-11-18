#include<iostream>
using namespace std;
int main(){

    int n ;
    cin>>n;

    int row = 1;
    while(row <= n){
        int space = row - 1;
        while(space){
            cout<<" ";
            space--;
        }
        int column = 1;
        int num = n - row + 1;
        while(column <= num){
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }
}