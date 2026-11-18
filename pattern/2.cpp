#include<iostream>
using namespace std;

int main(){
    cout<<"enter n : ";
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int column = 1;
          while(column <= n){
            cout<<row;
            column++;
          }
          cout<<endl;
          row++;
    }
}