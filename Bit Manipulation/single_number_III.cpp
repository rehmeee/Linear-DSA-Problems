#include <bits/stdc++.h>
using namespace std;
// 260. Single Number III
     vector<int> singleNumber(vector<int>& nums) {
        vector<int> vec;
        int i = 0, n = nums.size() ;
        sort(nums.begin(), nums.end());
        while (i<n-1)
        {
            int temp = nums[i] ^ nums[i+1];
            if(temp ==0){
                i +=2;
            }
            else {
                vec.push_back(nums[i]);
                ++i;
            }
        }
        if(vec.size() ==1){
            vec.push_back(nums[n-1]);
        }
        return vec;
        

    }
int main(){
        	vector<int> vec = {1,2,1,3,2,5};
            vector<int> vec2 = singleNumber(vec);
            for(auto x: vec2){
            cout<<x<<endl;
            }
}