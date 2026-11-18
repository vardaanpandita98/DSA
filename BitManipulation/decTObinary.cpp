#include<bits/stdc++.h>
using namespace std;

int Basic(int n){
    int ans = 0;
    int i =  0;

    while(n!=0){
        int rem = n%2;
        ans = (rem * pow(10,i)) + ans;
        i++;
        n=n/2;
    }

    return ans;


}

int Basic2(int n){
    int ans = 0;
    int i =  1;

    while(n!=0){
        int rem = n%2;
        ans = (rem * i) + ans;
        i = i*10;;
        n=n/2;
    }

    return ans;


}

int Bit(int n ){
    int ans = 0;
    int i = 1;

    while(n!=0){
        int bit = n&1;
        ans = (bit*i) + ans;
        i = i*10;
        n = n >> 1;
    }
    return ans;

}

int BianryOfNegetive(int n){
    if(n>=0){
        int ans = 0;
    int i = 1;

    while(n!=0){
        int bit = n&1;
        ans = (bit*i) + ans;
        i = i*10;
        n = n >> 1;
    }
    return ans;
    }
    else{
        int positive = - n;
        int ans = 0;
        int i =  1;
        while(positive!=0){
            int rem =  positive % 2;
            ans = (rem * i) + ans;
            i = i*10;
            positive = positive/2;
        }
        int complement = 0;
        int j = 1;
        while(j <= 10000000){ //to keep in mind that we have to only pad 8 bits.
            int bit = ans%10;
            int newbit = 1 -  bit;
            complement = (newbit * j) + complement;
            j = j*10;
            ans = ans/10;
        }
        complement = complement + 1;

        return complement;

    }
}

int main(){

    int n;
    cin>>n;

    int A = Basic(n);
    cout<<A<<endl;

    int B = Basic2(n);
    cout<<B<<endl;

    int c = Bit(n);
    cout<<c<<endl;

    int x = -5;
    int d = BianryOfNegetive(x);
    cout<<d<<endl;
    

}