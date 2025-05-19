#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 3024. Type of Triangle
string triangleType(vector<int>& nums) {
unordered_set<int> set;
                int s = 0;
        for(auto x: nums){
            set.insert(x);
            s+= x;
        }
        for(int i = 0 ; i< 3; ++i){
            if( (s - nums[i])<= nums[i]) return "none";
        }
        int n = set.size();
        if(n == 1) return "equilateral";
        else if(n ==3) return "scalene";
        
        return "isosceles";
    }
int main(){
    vector<int> vec = {3,3,3};
    cout<<triangleType(vec)<<endl;
}