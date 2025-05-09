#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
//https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/
bool isPrefixAndSuffix(string& str1, string& str2){
        if(str1.length()> str2.length()) return false;
        int l = str1.length();
        for(int i = 0 ; i < l ; ++i){
            if(str1[i] != str2[i]) return false;
        }
        int l2 = str2.length()-1;
        l-=1;
        while (l>=0)
        {
            if(str1[l] != str2[l2]) return false;
            l2--;
            l--;
        }
        return true;
        
}
int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        if(n<2) return 0;
        int count = 0;
        for(int  i = 0 ; i < n ; ++i){
            string str1 = words[i];
            for (int j = i+1; j<n ; ++j){
                string str2 = words[j];
                if(isPrefixAndSuffix(str1, str2)) count++;
            }
        }
        return count;
}
int main(){
 vector<string> vec = {"abab","ab"};       	
 cout<<countPrefixSuffixPairs(vec)<<endl;
}