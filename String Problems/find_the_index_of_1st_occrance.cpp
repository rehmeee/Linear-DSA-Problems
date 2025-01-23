#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=problem-list-v2&envId=two-pointers
    string hayastack = "sadbutsad", needle = "asad";
    int str = hayastack.find(needle);
    cout<<str;
}