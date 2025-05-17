#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 bool canJump(vector<int>& nums) {
     int curr=0;
        for(int i=0;i<nums.size();i++){
            curr=max(curr,nums[i]+i);
            // cout<<curr<<endl;
            if(curr>=nums.size()-1)return 1;
            if(curr<=i)return 0;
        }
        return 0;
    }
int main(){
        	vector<int> vec = {2,3,1,1,4};
            cout<<canJump(vec)<<endl;
}