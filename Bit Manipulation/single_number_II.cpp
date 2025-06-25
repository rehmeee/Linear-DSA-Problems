#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 137. Single Number II
 int singleNumber(vector<int>& nums) {
        int ones = 0, twos= 0;
        for(auto x: nums){
            ones = (ones ^ x) & ~twos;
            twos = (twos ^ x) & ~ones;
        }
        return ones;
    }
int main(){
        	vector<int> vec = {2,2,3,2};
            cout<<singleNumber(vec)<<endl;
}