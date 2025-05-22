#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
            unordered_map<int, int> map;
            int n = nums1.size(), count = 0;
            for(auto x: nums1){
                for(auto y: nums2){
                    map[x+y]++;
                }
            }
            for(auto x: nums3){
                for(auto y: nums4){
                    count += map[-(x+y)];
                }
            }
            return count;
    }
int main(){
        vector<int> 	nums1 = {0}, nums2 = {0}, nums3 = {0}, nums4 = {0};

        cout<<fourSumCount(nums1, nums2, nums3, nums4)<<endl;
}