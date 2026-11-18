#include<iostream>
using namespace std;
int Fact(int n){
    int factorial = 1;
    for(int i = 1 ; i<=n ;i++){
        factorial = factorial * i;
    }
    return factorial;
}

int NcR(int n , int r){
    int num = Fact(n);
    int den = Fact(r) * Fact(n-r);

    int ncr = num/den;
    return ncr;
}

int main(){
    int n , r;
    cin>>n>>r;

    int ans = NcR(n,r);
    cout<<ans;
    
}