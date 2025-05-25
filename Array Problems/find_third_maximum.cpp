#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int thirdMax(vector<int>& nums) {
        int fm = INT_MIN,  sm = INT_MIN, n = nums.size();
        long tm = LONG_MIN;
        for(int  i = 0 ; i< n; ++i){
            int temp = nums[i];
            if(temp> fm){
                fm = temp;
            }
            if(temp > sm && temp <= fm){
                sm = temp;
            }
            if(temp > tm && temp <= sm){
                tm = temp;
            }
        }
        return  tm>= INT_MIN ? tm: fm;
    }
int main(){
        	vector<int> vec = {1,2,2,5,3,5};
            cout<<thirdMax(vec)<<endl;
}