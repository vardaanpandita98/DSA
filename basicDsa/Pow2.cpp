#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n<=0){
        cout<<false;
        return 0;
    }

    for(int i = 0 ; i <= 30 ; i++){
        int Power = pow(2,i);
        if(Power == n){
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;

}