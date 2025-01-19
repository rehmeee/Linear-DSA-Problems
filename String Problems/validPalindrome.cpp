#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    // https://leetcode.com/problems/valid-palindrome/
        string str = "asdfsdsa";
        int j = str.length()-1;
        int i = 0;
        for(i;i<=j;i++,j--){
            if(str[i]==str[j]){
                continue;
            }
            cout<<"not palindrome";
        }
        cout<<"planidrome";
        return 0;


}