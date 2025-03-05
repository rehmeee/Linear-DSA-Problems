#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 438. Find All Anagrams in a String
// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
vector<int> findAnagrams(string s, string p) {
       vector<int> vec;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int i = 0 , j=0;
        while(j<p.length()){
            m1[p[j]]++;
            m2[s[j]]++;
            j++;
        }
        while(j<=s.length()){
            bool flag = true;
            for(auto x: m1){
                if(m2.find(x.first) != m2.end()){
                    if(m2[x.first] != x.second){
                        flag = false;
                        break;

                    }
                }
                else {
                    flag = false ;
                    break;
                }
            }
            if(flag){
                vec.push_back(i);
            }
            m2[s[i]]--;
            m2[s[j]]++;
            i++;
            j++;
        }
        return vec;
}
int main(){
        string s = "abaacbabc", p = "abc";
        vector<int > vec = findAnagrams(s,p);
        for(auto x: vec){
            cout<<x<<endl;
        }


}