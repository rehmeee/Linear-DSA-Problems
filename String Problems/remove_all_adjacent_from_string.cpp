#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 string removeDuplicates(string s, int k) {
        if(s.length()<k) return s;
        int i = 0 , l = s.length();
        for(int j = 0 ; j< s.length()-1; ++j){
            if(s[j] == s[j+1]){
                bool flag = true;
                int temp = j, temp2=0;
                char ch = s[j];
                while(temp2<=k  && temp2<l){
                    if(s[temp+temp2] != ch)
                }
            }
        }
    }
int main(){
    string s = "deeedbbcccbdaa";
    int k = 3 ;
    cout<<removeDuplicates(s,k)<<endl;
}