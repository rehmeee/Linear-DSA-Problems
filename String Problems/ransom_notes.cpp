#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 383. Ransom Note
bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for(auto x:ransomNote){
            map1[x]++;
        }
        for(auto x:magazine){
            map2[x]++;
        }
        for(auto x:map1){
            if(map2.find(x.first) == map2.end()) return false;
            else {
                if(map2[x.first]<x.second)return false;
            }
        }
        return true;

}
int main(){
        	string ransomNote = "aa", magazine = "aab";
            cout<<canConstruct(ransomNote, magazine)<<endl;
}