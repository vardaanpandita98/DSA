#include<iostream>
using namespace std;


bool checkEqual(int a[] , int b[]){
    for(int i = 0 ; i<26 ; i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

bool CheckInclusion(string s1 , string s2){
    int count1[26] = {};

    //count chars of s1
    for(int i = 0 ; i < s1.length() ; i++){
        int index = s1[i] -  'a';
        count1[index]++;
    }

    //first window of s2
    int i = 0;
    int windowsize = s1.length();
    int count2[26] = {0};

    while(i<windowsize && i < s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    //compare both frequency
    if(checkEqual(count1,count2)){
        return true;
    }

    //sliding window
    while(i<s2.length()){

        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';
        count2[index]--;

        i++;

        if(checkEqual(count1 , count2)){
            return true;
        }
    }
    
return false;


}