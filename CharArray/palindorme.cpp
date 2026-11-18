#include<iostream>
using namespace std;

bool isPalindrome(char name[] , int n){
    int s = 0;
    int e =  n - 1;

    while(s<e){
        if(name[s]!=name[e]){
            return 0;
            break;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}