#include<iostream>
using namespace std;

int SqRoot(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        int s = 0 , e = n , ans  = 1;
        while(s<=e){
            int mid = s + (e - s)/2;

            if(  mid <= n / mid){
                ans = mid ;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
    }

    return ans ;
}
}

double DecimalpartSqRoot(int n , int precision , int ans){
    double factor = 1.0;
    double result = ans;

    for(int i = 0 ; i < precision ; i++){
        factor /= 10;
        while(result * result <= n){
           result = result + factor;
        }
        result =result - factor ;
    }

    return result;
}
