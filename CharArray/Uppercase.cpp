#include<iostream>
using namespace std;

char ToUpperCase(char ch){
    if(ch >= 'A' &&  ch<= 'Z'){
        return ch;
    }
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}