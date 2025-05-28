#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
 char findTheDifference(string s, string t) {
         unordered_map<char, int> count;
        
        for (char c : t) {
            count[c]++;
        }
        
        for (char c : s) {
            count[c]--;
            if (count[c] == 0) {
                count.erase(c);
            }
        }
        
        return count.begin()->first;     
        
    }
int main(){
        	string s = "abcde", t = "abdce";
            cout<<findTheDifference(s,t)<<endl;
}