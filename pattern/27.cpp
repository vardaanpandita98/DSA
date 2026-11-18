#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int num = n - row + 1;
        int column = 1;
        while(column <= num){
            cout<<column;
            column++;
        }

        int star1 = 1;
        while(star1 <= row - 1){
            cout<<"*";
            star1++;
        }

        int star2=1;
        while(star2 <= row - 1){
            cout<<"*";
            star2++;

        }

        int nums = 1;
        while(nums <= num){
            cout<<nums;
            nums++;
        }
        cout<<endl;
        row++;

    }
}