#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 string rev(string &s, int index) {
        if(index == s.length()) return "";
        return rev(s, index+1) + s[index];
    }
int main(){
        string s = "rehmanali";
        	cout<<rev(s,0)<<endl;
}