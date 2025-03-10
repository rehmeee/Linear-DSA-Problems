#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int maxSubArray(vector<int>& nums) {
            int maxSum = INT_MIN, currentSum = 0;
            for(int num:nums){
                currentSum+=num;
                maxSum = max(maxSum, currentSum);
                if(currentSum<0) currentSum =0;

            }
            return maxSum;
}
int main(){
        	vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
            cout<<maxSubArray(vec)<<endl;
}