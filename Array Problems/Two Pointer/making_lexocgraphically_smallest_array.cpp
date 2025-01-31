#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/?envType=daily-question&envId=2025-01-25
    vector<int> nums = {4,38,52,59,71,27,31,83,88,10};
    int limit = 14,len = nums.size();
    int l= 0 , r = len-1;
    for(int i = 0 ; i <len -1; i++){
        for(int j = len-1; j>i; j--){
            int temp = nums[i]-nums[j];
            if(abs(temp)<=limit && nums[i]>nums[j]){
                swap(nums[i],nums[j]);
                i--;
                break;
            }
        }
   
    }
    for(int i = 0 ; i<len  ; i++){
        cout<<nums[i] << "\t";
    }
   

}