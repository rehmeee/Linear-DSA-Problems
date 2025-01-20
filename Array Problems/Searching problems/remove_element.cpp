#include <iostream>
#include <stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // https://leetcode.com/problems/remove-element/description/
    vector <int> nums = {2,4,5,1,4,2};
    int val = 2;
     int len = nums.size();
        int k =0;
        for (int i = 0; i<len ; i++){
            if(nums[i]==val){
                nums[i] =60;
                continue;
            }
            k++;
        }
        sort(nums.begin(), nums.end());
        cout<< "this is the remaing no from that array"<<k;
        return k;
}