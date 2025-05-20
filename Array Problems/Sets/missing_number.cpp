#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 268. Missing Number
int missingNumber(vector<int>& nums) {
        unordered_set<int> set;
        int n = nums.size();
        for(int i = 0 ; i < n ;++i) {set.insert(nums[i]);}
        for(int i = 0 ; i <= n ;++i){
            if(set.find(i) == set.end()) return i;
        }
        return 0;
       
    }
int main(){
        	vector<int> vec = {9,6,4,2,3,5,7,0,1};
            cout<<missingNumber(vec)<<endl;
}