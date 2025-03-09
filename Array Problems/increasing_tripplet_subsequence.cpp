#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
       vector<int> left (nums.size(),0);
       vector<int> right (nums.size(),0);
       int l = nums[0], r =nums[nums.size()-1];

       for(int i = 1 ; i<nums.size(); i++){
        left[i] = l;
        l= min(l, nums[i]);
       }
       for(int i = nums.size()-2;i>=0;i--){
        right[i] = r;
        r = max(r, nums[i]);
       }
       for(int i = 1; i<nums.size()-1; i++){
        if(left[i]<nums[i] && nums[i]<right[i]) return true;
       }
       
       
       return false;
}
int main(){

    vector<int> vec = {1,2,3,4,5};
    cout<<increasingTriplet(vec)<<endl;
}