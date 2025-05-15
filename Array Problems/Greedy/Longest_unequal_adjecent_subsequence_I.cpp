#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2900. Longest Unequal Adjacent Groups Subsequence I
vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> vec;
        int prev = groups[0];
        vec.push_back(words[0]);
        int n = groups.size();
        for(int i = 1 ; i< n; ++i){
            if(groups[i] != prev){
                vec.push_back(words[i]);
                prev = groups[i];
            }
            
        }
        return vec;

    }
int main(){
        vector<string> 	words = {"a","b","c","d"};
        vector<int> groups = {1,0,1,1};

        words = getLongestSubsequence(words, groups);
        for(auto x: words){
            cout<<x<<endl;
        }
}