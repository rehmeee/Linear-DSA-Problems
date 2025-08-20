#include<iostream>
#include<stdio.h>
#include<string>
#include<utility>
#include<vector>
#include<unordered_map>
using namespace std;
// 239. Sliding Window Maximum
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> vec;
        pair<int,int> m= make_pair(0, nums[0]);
        int l = 0 , r= 0 , len = nums.size();
        while (r<k)
        {
            if(nums[r]>=m.second){
                m.first = r;
                m.second= nums[r];
            }
            ++r;
        }
        if(r == len) return {m.second};
        while (r<len)
        {
            vec.push_back(m.second);
            if(nums[r]>=m.second){
                m.first = r;
                m.second = nums[r];
                ++r;
                ++l;
            }
            else if(m.first>l){
                ++l;
                ++r;
            }
            else if(l==m.first){
                // unordered_map<int,int> map;
                int temp = l+1;
                m.first = temp;
                m.second = nums[temp];
                while(temp<=r){
                    if(nums[temp]>=m.second){
                        m.first = temp;
                        m.second = nums[temp];
                        
                    }
                    ++temp;
                }
                ++l;
                ++r;
                

            }
        }
         vec.push_back(m.second);
         return vec;
        

        
    }	
int main(){
        	vector<int> vec = {1,3,-1,-3,5,3,6,7};
            vec = maxSlidingWindow(vec, 3);
            for(auto x: vec){
            cout<<x<<endl;
            }
}