#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
//31. Next Permutation
vector<int>  nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n-2;
        while (i>=0 && nums[i]>= nums[i+1])
        {
            i--;
        }
        if(i >=0){
            int j  = n-1;
            while (nums[j] <= nums[i])
            {
                j--;
            }
            swap(nums[i], nums[j]);
            
        }
        reverse(nums.begin() +i+1, nums.end());
        return nums;
        

    }
int main(){
        	vector<int> vec = {4,2,3,1};
            vec = nextPermutation(vec);
            for(auto x: vec){
                cout<<x<<endl;
            }
}