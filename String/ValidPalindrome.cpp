#include<iostream>
using namespace std;

bool Valid(char ch){
    if(ch >= 'a' && ch<= 'z' || ch>= 'A' && ch<= 'Z' || ch>='0' && ch<='9'){
        return 1;
    }
    else{
        return 0;
    }
}

char ToLowerCase(char ch){
    if(ch >= 'a' && ch<= 'z' || ch >= '0' && ch<='9'){
        return ch;
    }
    else{
        char temp =  ch - 'A' + 'a';
        return temp;
    }
}

bool IsPalindrome(string a){
    int s = 0;
    int e = a.length() - 1;
    while(s<e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool ValidPalindrome(string s){
    string temp = "";
    for(int i = 0  ; i < s.length() ; i++){
        if(Valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    for(int j = 0 ; j < temp.length() ; j++){
        temp[j] = ToLowerCase(temp[j]);
    }

    return IsPalindrome(temp);
}