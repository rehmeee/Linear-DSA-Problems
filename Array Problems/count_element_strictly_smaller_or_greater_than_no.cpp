#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int countElements(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        sort(nums.begin(), nums.end());
        int smaller = nums[0], greater = nums[n-1], count = 0;
        for(int i = 1; i < n -1; ++i){
            int temp = nums[i];
            if(temp>smaller && temp < greater) count++;
        }
        return count;
        
}
int main(){
        	vector<int> vec = {11,7,2,15};
            cout<<countElements(vec)<<endl;
}