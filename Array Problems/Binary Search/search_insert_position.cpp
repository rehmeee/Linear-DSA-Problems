#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int left = 0 , right = nums.size()-1;
        int mid ;
        while (left<=right)
        {
             mid = left +(right - left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) right = mid-1;
            else left = mid+1;
        }
        return left;
        
}
int main(){
        	vector<int> vec = {1,3,5,6};
            int target = 0;
            cout<<searchInsert(vec, target)<<endl;
}