#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int len = nums.size();
    vector<vector<int>> sumarr;
    int f = 0;
            cout<<"i am in j";
    for(int i = 0; i<len ; i++){
        for (int j = i+1; j < len; j++)
        {
            for (int  k = j+1; k < len; k++)
            {
                if(nums[i] + nums[j] + nums[k] == 0){
                    sumarr[f] = {nums[i], nums[j], nums[k]};
                }
            }
            
        }
        for(int i = 0 ; i<len ; i++){
            cout<< "members" << nums[i];
        }
    }
}