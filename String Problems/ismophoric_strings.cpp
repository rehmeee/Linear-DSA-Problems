#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
        string s = "badc", t = "baba";
       map<char,char> m;
       for(int i = 0 ; i<s.length(); i++){
        if(m.find(s[i])!=m.end() ){
            if(m.find(t[i]) != m.end()) return 0;
            if(m[s[i]] != t[i])return 0;
        }
        else{
            for(auto &x:m){
                if(x.second == t[i]) return 0;
            }
            

            m[s[i]]= t[i];
           
        }
       }
       cout<<"yes"<<endl;
       return 0;
}