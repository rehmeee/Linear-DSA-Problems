#include <bits/stdc++.h>
using namespace std;
// 318. Maximum Product of Word Lengths
int maxProduct(vector<string>& words) {
    int  len= words.size(), maxLen = 0;
    for(int i = 0 ; i<len-1; ++i){
        int mask = 0;
       string s = words[i];
       for(auto c:s){
        mask |= (1<<(c -  'a'));
       }
       for(int j = i+1; j<len; ++j){
        int mask2 = 0;
        string s2 = words[j];
        for(auto c:s2){
        mask2 |= (1<<(c -  'a'));
       }
       if((mask & mask2) == 0){
        maxLen = max(maxLen ,int(s.length() * s2.length()) );
       }
       }

    }
    return maxLen;
    }    
int main(){
    vector<string> vec = {"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae"};
    cout<<maxProduct(vec)<<endl;
}