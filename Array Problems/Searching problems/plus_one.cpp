#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
            vector<int> nums = {9};
            int len = nums.size(); 
            int i = len-1;
            while (i>=0)
            {
                if(nums[i]<9){
                    nums[i]++;
                    cout<<"solved";
                    return 0;
                }
                else {
                    nums[i]=0;
                    i--;
                }
            }
            vector<int> nums2(len+1);
            nums2[0]=1;
            cout<<"solved with external array";
            return 0;
            
}