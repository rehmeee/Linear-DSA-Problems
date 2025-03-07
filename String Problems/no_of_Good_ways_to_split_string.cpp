#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>

using namespace std;
// 1525. Number of Good Ways to Split a String
int numSplits(string s) {
        unordered_map<char, int> map;
        unordered_set<char> set;
        int goodSplits =0;
        for(auto x:s){
            map[x]++;
        }
        for(int i = 0 ; i< s.length()-1; i++){
            set.insert(s[i]);
            map[s[i]]--;
            int temp=0;
            for(auto x: map){
                if(x.second >0) temp++;
            }
            if(set.size() == temp) goodSplits++;

        }
        return goodSplits;
}
int main(){
    string s = "abcd";
    cout<<numSplits(s)<<endl;       	
}