#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> vec;
        vec.push_back(words[0]);
        int prev = groups[0], n = groups.size(), prevIndex = 0;
        for(int i = 1 ; i< n ;++i){
            if(prev != groups[i] &&  words[prevIndex].length() == words[i].length()){
               
                vec.push_back(words[i]);
                prev = groups[i];
            }
        }
        return vec;
    }
int main(){
      vector<string>   words = {"a","b","c","d"};
      vector<int> groups = {1,2,3,4};	
      words = getWordsInLongestSubsequence(words, groups);
      for(auto x: words){
        cout<<x<<endl;
      }
}