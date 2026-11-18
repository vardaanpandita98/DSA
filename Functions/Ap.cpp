#include<iostream>
using namespace std;

int nTerm(int n){
    int ans = 3*n + 7;

    return ans ;
}

int main(){
    int n;
    cin>>n;
    int m = nTerm(n);
    cout<<m<<endl;
}
