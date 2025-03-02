#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
    int fun(vector<int> nums){
        set<int> s;
        for(int x: nums){
            s.insert(x);
        }
        for(auto x: s){
            cout<<x<<endl;
        }
        int i = 1;
        while(i<nums.size()){
            if(s.find(i) == s.end()) return i;
            i++;
        }
        return i;

    }
int main(){
        	vector<int> nums = {3,4,-1,1};
            cout<<fun(nums)<<endl;
}