#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool isSubsequence(string s, string t) {
        int temp = 0;
        for(auto x: s){
            bool flag = false;
            for(int i = temp; i<t.length(); i++){
                if(x==t[i]){
                    temp=i+1;
                    flag= true;
                    break;

                }
            }
            if(!flag) return false;
        }
        return true;
}
int main(){
        string s = "bb", t = "ahbgdc";
        cout<<isSubsequence(s,t)<<endl;
}