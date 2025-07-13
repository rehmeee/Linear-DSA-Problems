#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 345. Reverse Vowels of a String
         string reverseVowels(string s) {
            int l = 0, r = s.length()-1;
            unordered_set<char> set = {'a','e','i','o','u','A','E','I','O','U'};
          

            while (l<=r)
            {
                while (l<=r && set.find(s[l]) == set.end())
                {
                   ++l;
                }
                 while (r>=l && set.find(s[r]) == set.end())
                {
                   --r;
                }
                if(l<=r){
                    swap(s[l++], s[r--]);
                }
                
            }
            return s;
            

    }	
int main(){
        	string s = "leetcode";
            cout<<reverseVowels(s)<<endl;
}