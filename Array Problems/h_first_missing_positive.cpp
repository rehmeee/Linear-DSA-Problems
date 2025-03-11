#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 41. First Missing Positive
int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        int curntMissig =1;
        for(auto x:s){
            if(x<=0) continue;
            else if(x == curntMissig) curntMissig++;
            else return curntMissig;
        }
        return curntMissig;
}
int main(){
        	vector<int> vec = {7,8,9,11,12};
            cout<<firstMissingPositive(vec)<<endl;
}