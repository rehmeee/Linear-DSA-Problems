#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
bool validPalidrome(string& s){
    int n = s.length();
    if(n == 0) return false;
    int l = 0 , r = n-1;
    while(l<r){
        if(s[l] != s[r]) return false;
        ++l;
        --r;
    }
    return true;
}
 vector<vector<int>> palindromePairs(vector<string>& words) {
    vector<vector<int>> vec;  
    unordered_map<string, int> map; 
        int n = words.size();
        for(int i = 0 ; i< n; ++i){
            map[words[i]] = i;
        }
        for(int i = 0 ; i< n ; ++i){
            string temp = words[i];
            for(auto x: map){
                if(temp == x.first) continue;
                string s = temp + x.first;
                if(validPalidrome(s)) vec.push_back({i, x.second});
            }

        }
        return vec;
        
    }
int main(){
        	vector<string> vec = {"abcd","dcba","lls","s","sssll"};
            vector<vector<int>> pairs  = palindromePairs(vec);
            for(auto x : pairs){
                for(auto c: x){
                    cout<<c;
                }
                cout<<""<<endl;
            }

            
}