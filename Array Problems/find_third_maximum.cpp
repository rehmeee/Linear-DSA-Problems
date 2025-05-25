#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int thirdMax(vector<int>& nums) {
    unordered_set<int> set;

       for(auto x: nums){
        set.insert(x);
       }
       nums={};
       for(auto x: set){
        nums.push_back(x);
       }
       sort(nums.begin(), nums.end());
       if(nums.size()< 3) return nums[nums.size()-1];
       else return nums[nums.size()-3];
       return 0;
    }
int main(){
        	vector<int> vec = {1,2,2,5,3,5};
            cout<<thirdMax(vec)<<endl;
}