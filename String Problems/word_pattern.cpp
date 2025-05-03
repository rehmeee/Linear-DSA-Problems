#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
// 290. Word Pattern
bool wordPattern(string pattern, string s) {
            vector<string> words;
            int i = 0 ;
            while (i<s.length())
            {
                string temp= "";
                while (s[i] != ' ' && i<s.length())
                {
                    temp += s[i++];
                }
                words.push_back(temp);
                i++;
            }
            if(pattern.length()!= words.size()) return false;
            unordered_map<char, string> map;
            unordered_set<string> set;
            for(int i = 0 ; i< pattern.length(); i++){
                if(map.find(pattern[i]) == map.end()){
                    if(set.find(words[i]) == set.end()){

                        map[pattern[i]] = words[i]; 
                        set.insert(words[i]);
                    }
                    else return false;
                    }
                else if(map[pattern[i]] == words[i]) continue;
                else return false;
            }
            return true;

            
}
int main(){
        string pattern = "jquery", s = "jquery";
        cout<<wordPattern(pattern, s)<<endl;	
}