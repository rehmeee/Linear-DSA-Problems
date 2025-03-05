#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k) {
        int temp=0, count=0;
        for(int i = 0 ; i< nums.size(); i++){
            temp += nums[i]; 
            nums[i] = temp;
        }
        for(int i = 0 ; i < nums.size(); i++){
            temp = nums[i];
            if(temp %k ==0) count++;
            for(int j = i+1; j<nums.size(); j++){
                if((temp - nums[j]) % k ==0) count++;
            }
        }
        return count;


}	
int main(){
    vector<int> vec = {4,5,0,-2,-3,1};
    int k = 5;
    cout<<subarraysDivByK(vec, k)<<endl;
}