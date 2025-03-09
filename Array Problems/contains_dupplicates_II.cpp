#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, vector<int>> map;
    for(int i =0 ; i<nums.size(); i++){
        map[nums[i]].push_back(i);
    }
    for(auto x:map){
        if(x.second.size() <2) continue;
        else {
                if(x.second.size() ==2){
                if(abs(x.second[0] - x.second[1])<=k) return true;}
                else {
                    for(int i =0; i<x.second.size()-1;i++){
                        if(abs(x.second[i] - x.second[i+1]) <=k) return true;
                    }
                    
                }
            
        }
    }
    return false;
}
int main(){
    int k = 3;
    vector<int> vec = {1,2,3,1};
    cout<<containsNearbyDuplicate(vec, k)<<endl;
}