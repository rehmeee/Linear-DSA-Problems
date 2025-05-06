#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<int> buildArray(vector<int>& nums) {
        vector<int> ans ;
        for(int i = 0;  i<nums.size(); i++){
           ans.push_back(nums[nums[i]]);
        }
       return ans;
}
int main(){
        	vector<int>  nums = {5,0,1,2,3,4};
            nums = buildArray(nums);
            for(auto x: nums){
                cout<<x<<endl;
            }

}