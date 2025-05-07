#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
        int closest_sum = INT_MAX / 2;  // A large value but not overflow
        
        for (int i = 0; i < nums.size() - 2; ++i) {
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (abs(current_sum - target) < abs(closest_sum - target)) {
                    closest_sum = current_sum;
                }
                if (current_sum < target) {
                    ++left;
                } else if (current_sum > target) {
                    --right;
                } else {
                    return current_sum;
                }
            }
        }
        
        return closest_sum;
}
int main(){
   vector<int> nums = {4,0,5,-5,3,3,0,-4,-5};
    int target = -2;
    cout<<threeSumClosest(nums, target)<<endl;
}