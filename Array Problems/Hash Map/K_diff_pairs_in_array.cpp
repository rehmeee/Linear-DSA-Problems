#include<iostream>
#include<stdio.h>
#include<utility>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<set>
using namespace std;
// 532. K-diff Pairs in an Array
        int findPairs(vector<int>& nums, int k) {
        unordered_set<int> set0;
        set<pair<int,int>> set1;
        set0.insert(nums[0]);
        int len = nums.size();
        for(int i = 1; i<len; ++i){
            if(set0.find((nums[i]+k)) != set0.end() && set1.find({nums[i], *set0.find((nums[i]+k))}) == set1.end() && set1.find({*set0.find((nums[i]+k)),nums[i]}) == set1.end()) {
                set1.insert({nums[i],*set0.find(nums[i]+k)});

            }
             if(set0.find(nums[i]-k) != set0.end() && set1.find({nums[i], *set0.find((nums[i]-k))}) == set1.end() && set1.find({*set0.find((nums[i]-k)),nums[i]}) == set1.end()){
                set1.insert({nums[i],*set0.find(nums[i]-k)});
            }
            set0.insert(nums[i]);
        }
        return (int) set1.size();
    }	
int main(){
        	vector<int> vec = {1,2,4,4,3,3,0,9,2,3};
            cout<<findPairs(vec,3)<<endl;
}