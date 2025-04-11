#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int lengthOfLastWord(string s) {
    int l = 0 , r = s.length()-1, len = 0;
    if(s[r] == ' '){
        while(s[r] == ' ') r--;
    }
    while(r>=l){
        if(s[r] != ' ') {
            len++;
            r--;
            continue;
        }
        else break;
    }
    return len;

}
int main(){
        	cout<<lengthOfLastWord("   fly me   to   the moon  ")<<endl;
}