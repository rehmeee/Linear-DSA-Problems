#include <bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int s = n*(n+1)/2;
    for(auto x: nums){
        s -=x;
    }
    return s;
    }    
int main(){
        	vector<int> vec = {3,0,1};
}