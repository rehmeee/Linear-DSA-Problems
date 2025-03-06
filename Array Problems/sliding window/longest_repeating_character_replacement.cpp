#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int characterReplacement(string s, int k) {
        int i = 0 , j = 0, temp = k, longest=0, tempmax = 0;
        while(j<s.length()){
            if(s[i] == s[j]){
                tempmax++;
                j++;
                longest = max(longest, tempmax);
            }
            else if(s[i] != s[j] && temp >0){
                tempmax++;
                temp--;
                j++;
                longest = max(longest, tempmax);
            }
            else {
                while(s[i] != s[j]){
                    i++;
                }
                j = i;
                temp = k;
                tempmax = 0;
            }

        }
        return longest;
}
int main(){
  string  s = "AABABBA";
  int k = 1;
  cout<<characterReplacement(s,k)<<endl;
}