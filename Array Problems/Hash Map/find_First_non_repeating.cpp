#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
            // https://leetcode.com/problems/first-unique-character-in-a-string/
        	    unordered_map<char, int> um;
                string s = "leetcode";

                for(auto x: s){
                    um[x]++;
                }
                for(auto x : s){
                    if(um[x]==1){
                        cout<<s.find(x)<<endl;
                        cout<<x<<endl;
                        return s.find(x);
                    }
                }
                return -1;

}