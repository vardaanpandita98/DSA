#include<iostream>
using namespace std;

int SumOfDigits(int n){
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;

}

int ProductOfDigits(int n){
    int product = 1;
    while(n!=0){
        int digit = n%10;
        product = product * digit;
        n = n/10;
    }
    return product;
}
  


int main(){
    int n;
    cin>>n;

    int sum = SumOfDigits(n);
    int product = ProductOfDigits(n);

    int diff = product - sum;

    cout<<diff;
}
