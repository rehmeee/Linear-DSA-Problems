#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto x: nums){
            ans ^= x;
        }
        return ans;
    }
int main(){
        	vector<int> vec = {2,2,1};
            cout<<singleNumber(vec)<<endl;
}