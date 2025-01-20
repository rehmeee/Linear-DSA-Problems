#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    // https://leetcode.com/problems/search-insert-position/description/
        vector <int> nums={1,5,6,8,9};
        int target = 7;
        int len = nums.size();
        int i = 0;
        for(i ; i<len ; i++){
            if(nums[i] == target){
                cout<< "this is the target "<<i<<endl;
                return i;
            }
            if(nums[i]<target){
                continue;
            }
            if(nums[i]>target){
                break;
            }
        }
        cout<< "the index for this element is "<< i;
        return i;
}