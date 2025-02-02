#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
        	// https://leetcode.com/problems/single-number/

            unordered_map<int,int> um;
            vector<int> nums = {2,2,1,3,1};
            for(int x : nums){
                um[x]++;
            }
            for(int x: nums){
                if(um[x] == 1){
                    cout<<x<<endl;
                    return x;
                    
                }
            }
            return 0;
}