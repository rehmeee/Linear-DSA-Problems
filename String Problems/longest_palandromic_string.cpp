#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
string longestPalindrome(string s) {
    // 5. Longest Palindromic Substring
        unordered_map<int, int> map;
        int l = s.length();
        for(int i = 0 ; i <l-1 ; i++){
            for(int j = l-1; j>i ; j--){
                if(s[i] == s[j]){
                    int temp1 = i, temp2 = j;
                    bool flag = true;
                    while (s[i] == s[j] && i <= j)    
                    {
                        i++; j--;
                    }
                    if(i>j){
                        map[temp1] = temp2;
                        i = temp1;
                        break;
                    }
                    else {
                        i = temp1 ; 
                        j = temp2; 
                        continue;
                    }
                
                }
            }
        }
        int longest = 0, dif = 0;
        for(auto x: map){
            if(x.second - x.first + 1> dif){
                dif = x.second  - x.first + 1;
                longest = x.first;
            }
        }
        string temp = "";
        for(int i = longest; i <= map[longest]; i++){
            temp += s[i];
        }
        return temp;

}
int main(){
        string s = "cbbdbb";
        cout<<longestPalindrome(s)<<endl;	
}