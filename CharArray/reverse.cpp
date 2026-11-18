#include<iostream>
using namespace std;

void reverse(char name[] , int n){
    int s = 0;
    int e = n - 1;

    while(s<e){
        int temp = name[s];
        name[s] = name[e];
        name[e] = temp;
    }
}