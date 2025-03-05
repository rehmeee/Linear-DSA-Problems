#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum =0;
        unordered_map<int,int> ma;
        int i = 0, j = 0;
        while(j<k){
            ma[nums[j]]++;
            j++;
        }
        while(j<=nums.size()){
            long long temp =0;
            for(auto x: ma){
                if(x.second>1){
                    temp =0;
                    break;
                    
                }
                else if(x.second <=0) continue;
                temp+= x.first;
            } 
            sum = max(sum, temp);
            ma[nums[i]]--;
            ma[nums[j]]++;
            i++;
            j++;
        }
        return sum;
}
int main(){
    int k = 2;
    vector<int> vec = {3,5,3,4};
    cout<<maximumSubarraySum(vec, k)<<endl;
}