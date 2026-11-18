#include<iostream>
using namespace std;
int SetBits(int n){
    int count = 0;
    while(n!=0){
    if(n&1){
        count++;
    }
    n =  n>>1;

    }
    return count;

}

int main(){
    int a , b;
    cin>>a>>b;

    int bits = SetBits(a) + SetBits(b);
    cout<<bits;
}