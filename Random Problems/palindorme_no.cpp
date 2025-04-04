#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool isPalindrome(int x) {
        if(x< 0) return false;
        if(x == 0) return true;
        string s ="";
        while (x>=10)
        {
            s.push_back(x % 10);
            x /= 10;
        }
        s.push_back(x);
        int l = 0, r = s.length()-1;
        while (l<=r)
        {
            if(s[l] != s[r]) return false;
            else {
                l++;
                r--;
            }
        }
        
        return true;
        

       
        
}
int main(){
        int x = 10;
        cout<<isPalindrome(x)<<endl;	
}