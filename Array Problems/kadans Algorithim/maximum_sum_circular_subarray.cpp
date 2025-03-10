#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int maxSubarraySumCircular(vector<int>& nums) {
       int currentMax= 0, currentMin=0, maxsum= INT_MIN,minsum= INT_MAX,  totalSum=0;
       for(auto num : nums){
        totalSum+=num;
        currentMax = max(num, num+currentMax);
        maxsum = max(maxsum, currentMax);
        currentMin = min(num, currentMin+num);
        minsum= min(minsum, currentMin);
       }
       if(maxsum<0) return maxsum;
       return max(maxsum, totalSum-minsum);
}
int main(){
        	vector<int> vec = {-3,-2,-3};
            cout<<maxSubarraySumCircular(vec)<<endl;
}