#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 153. Find Minimum in Rotated Sorted Array

int findMin(vector<int>& nums) {
        int minimum = INT_MAX, start = 0 , end = nums.size()-1, mid;
        while(start<= end){
            mid = start + (end- start)/2;
            minimum = min(minimum, nums[mid]);
            if(nums[mid]<nums[end]) end = mid-1;
            else if(nums[mid]>= nums[start]) start = mid+1;

        }
        return min(minimum, end>=0? nums[end]: minimum);
        
}
int main(){
        	vector<int> vec = {11,13,15,17};
            cout<<findMin(vec)<<endl;
}