#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

// 3 . longest substring with no duplicate characters
//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/?envType=problem-list-v2&envId=hash-table


// brute force apprach
int logestcommontSbstring(string s){
    unordered_set<char> se;
    int maxs = 0;
    for(int i = 0; i <s.length(); i++){
        se.insert(s[i]);
        int temp = 1;
        for(int j = i+1; j<s.length() ; j++){
            if(se.find(s[j]) == se.end()) {
                se.insert(s[j]);
                temp++;
            }
            else {
                se.clear();
                break;
            }
        }
        maxs = max(temp, maxs);
    }
    return maxs;
}

// lets try to find optimal apprach for this problem

int longestSubstring(string s){
    unordered_set<char> se;
    int l = s.length();
    int i = 0 , j = 0 , maxs = 0;
    while(j<l){
        if(se.find(s[j]) == se.end()){
            se.insert(s[j]);
            maxs = max(maxs, (j-i +1));
            j++;
          
        }
        else {
            se.erase(s[i]);
            i++;
            continue;
        }
        
    }
    return maxs;
}
int main(){
        	string s = "bbbbb";
            //cout<<logestcommontSbstring(s)<<endl;
            cout<<longestSubstring(s)<<endl;
}