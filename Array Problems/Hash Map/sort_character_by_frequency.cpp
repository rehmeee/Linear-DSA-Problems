#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
string main(){

    // https://leetcode.com/problems/sort-characters-by-frequency/description/
        	string s = "A";
            unordered_map<char,int> um;
            for(char c: s){
                um[c]++;
            }
            vector<pair<char,int>> vec(um.begin(),um.end());
            sort(vec.begin(), vec.end(),[](pair<char,int> &a, pair<char,int> &b){
                return a.second>b.second;
            });
            s.clear();
            for(auto v: vec){
                cout<<v.first<<endl;
                s.append(v.second,v.first);
                
            }
            cout<<s;
            cout<<s.length()<<endl;
            return s;
            
            
}