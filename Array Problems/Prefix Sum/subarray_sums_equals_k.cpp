#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

// 560 sub array sum equals to k
// https://leetcode.com/problems/subarray-sum-equals-k/description/
int subarraySum(vector<int>& nums, int k) {

            int count = 0, temp = 0;
            for(int i = 0; i < nums.size(); i++){
                temp += nums[i];
                nums[i] = temp;
            }
            temp = 0;
            for(int i = nums.size()-1; i>=0; i--){
                temp = nums[i];
                if(temp == k) count++;
                for(int j = i -1; j>=0 ; j--){
                    if(temp - nums[j] ==k) count++;
                }
            }
            return count;
}
int main(){
        	vector<int> vec = {1,1,1};
            int k= 2;
            cout<<subarraySum(vec,k)<<endl;
}