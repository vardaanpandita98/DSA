#include<iostream>
#include<vector>

using namespace std;

void Rotate(vector<int>& nums ,  int k){
    vector<int> temp(nums.size());
    for(int i = 0 ; i < nums.size() ; i++){
        temp[(i+k)%nums.size()] = nums[i];
    }
    for(int j = 0 ; j<nums.size() ; j++){
    nums[j] = temp[j];
}
}