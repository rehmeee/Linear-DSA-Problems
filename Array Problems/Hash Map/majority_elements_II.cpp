#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
            //https://leetcode.com/problems/majority-element-ii/description/
int main(){
    vector<int> vec = {1};    
    map<int,int> m;	
    float n = vec.size()/3;
    for(auto x: vec){
        m[x]++;
    }
    vec.clear();
    for(auto x: m){
        if(x.second>n){
            vec.push_back(x.first);
        }
    }
    for(auto x: vec){
        cout<<x<<endl;
    }
    

}