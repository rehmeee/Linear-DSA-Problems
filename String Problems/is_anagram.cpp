#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
        if(t.length()< s.length()) return false;
        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;
        for(auto x: s) maps[x]++;
        for(auto x: t) mapt[x]++;
        if(maps == mapt) return true;
        return false;
}
int main(){
        	string  s = "rat", t = "car";
            cout<<isAnagram(s,t)<<endl;
}