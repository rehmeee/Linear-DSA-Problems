#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 4 Sum
vector<vector<int>> fourSum(vector<int>& nums, int target) {
             int n = nums.size();
            if(n<4) return {};
            vector<vector<int>> vec;
            set<vector<int>> set;
            sort(nums.begin(), nums.end());

            for (int i = 0; i <= n-3; i++)
            {
                int temp1 = nums[i];
                for(int j = i+1; j <= n -2; ++j){
                    int temp2 = nums[j];
                    int left = j+1, right = n-1;
                    while (left<right)
                    {
                        if(temp1 + temp2 + nums[left] + nums[right] == target){
                            set.insert({temp1 , temp2 , nums[left] , nums[right]});
                            left++;
                        }
                        else if(temp1 + temp2 + nums[left] + nums[right] < target){
                            left++;
                        }
                        else right--;
                    }
                    
                }
            }
            for(auto x: set){
                vec.push_back(x);
            }
            return vec;
            

    }
int main(){
        	vector<int> vec = {1000000000,1000000000,1000000000,1000000000};
            int t = 0;
            vector<vector<int>> vec2 = fourSum(vec,t);
            for(auto v: vec2){
                for(auto x: v){
                    cout<<x<<endl;
                }
            }
}