#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2918. Minimum Equal Sum of Two Arrays After Replacing Zeros
long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int c1 = 0, c2 = 0;
        long long sum1 = 0 , sum2 = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        for (size_t i = 0; i < n1; i++)
        {
            if(nums1[i] == 0) {c1++; sum1++;}
            sum1+= nums1[i];
        }
        for (size_t i = 0; i < n2; i++)
        {
            if(nums2[i] == 0) {c2++; sum2++;}
            sum2+= nums2[i];
        }
        if (sum1 == sum2)
        {
            return sum1;
        }
        
        else if(sum1< sum2 && c1 > 0){
            while (sum1 < sum2)
            {
                sum1++;
            }
            return sum1;
            
        }
        else if(sum2 < sum1 && c2 > 0){
            while (sum2< sum1)
            {
                sum2++;
            }
            return sum2;
        }
        return -1;
        
    }
int main(){
     vector<int> nums1 = {0,16,28,12,10,15,25,24,6,0,0};
     vector<int> nums2 = {20,15,19,5,6,29,25,8,12};
     cout<<minSum(nums1, nums2)<<endl;   	
}