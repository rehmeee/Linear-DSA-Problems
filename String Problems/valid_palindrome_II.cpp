#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool validPalindrome(string &s, int left, int right){
    while (left<right)
    {
        if(s[left] != s[right]){
            return false;
        }
        left++;
        --right;
    }
    return true;
    
}

  bool validPalindrome(string s) {
        int l = 0 ,  n = s.length(), r = n-1;
        if(n == 1) return true;
        while (l<r)
        {
            if(s[l] == s[r] ){
                ++l;
                --r;

            }
            else{
                if(validPalindrome(s, l+1, r)) return true;
                else if(validPalindrome(s, l , r-1)) return true;
                else return false;

            }
        }
        return true;
        
    }
int main(){
        	string s = "abca";
            cout<<validPalindrome(s)<<endl;
}