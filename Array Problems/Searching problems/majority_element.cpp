#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // https://leetcode.com/problems/majority-element
       
     vector<int> nums = {8,8,7,7,7};
     int s = nums.size()/2;
     int actualsize = nums.size();
     int  i = 0;
     int count=0;
    for(i; i<actualsize; i++){
     for(int j=0; j<actualsize;j++){
          if(nums[i]== nums[j]){
               count++;
          }
     }
     if (count>s){
          cout<<nums[i];
          return nums[i];
     }
     count = 0;
     
     
    }
    return 0;
     cout<<s;
}
