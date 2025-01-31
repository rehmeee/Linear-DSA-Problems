#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    // https://leetcode.com/problems/contains-duplicate/
    vector<int> arr = {2, 5, 3, 7,2}	;
        set<int> s;
}
 bool containsDuplicate(vector<int>& nums) {
        set<int> s ;
        for(int x: nums){
            if(s.find(x) != s.end()){
                return true;
            }
            s.insert(x);
        }
        return false;
    }