#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
long long countSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int res = 0;
        int l = 0 , r = 0 ;
        auto maxe = max_element(nums.begin(), nums.end());
        int maxNo = *maxe;
        while(r<=nums.size()){
            if(map.find(maxNo) != map.end() && map[maxNo] == k){
                res++;
                res += nums.size() - r;
                map[nums[l++]]--;
                
            }
            else {
               if(r == nums.size()) map[nums[r++]]++;
               else r++;
            }
        }
        return res;
}
int main(){
            vector<int> vec = {1,4,2,1};
            cout<<countSubarrays(vec, 3)<<endl;
}