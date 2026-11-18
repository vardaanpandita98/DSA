#include<iostream>
using namespace std;

int Power(int a , int b){
    int ans = 1;
    for(int i = 0 ; i < b ; i++){
        ans  = ans * a;
    }

    return ans;
}
int main(){

    int a ,  b;
    cin>>a>>b;

    int ans = 1;
    for(int i = 1 ;  i <=b ; i++){
        ans  = ans * a;
    } 


    cout<<ans<<endl;;


    int P = Power(a,b);
    cout<<P<<endl;
}