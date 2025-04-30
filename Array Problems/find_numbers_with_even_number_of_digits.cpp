#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1295. Find Numbers with Even Number of Digits
int findNumbers(vector<int>& nums) {
    int n = 0 ;
    for(int i = 0 ; i < nums.size(); i++){
        string temp = "";
        temp += to_string(nums[i]);
        if(temp.length()%2 == 0) n++;
    }
    return n;
}
int main(){
        vector<int> vec = {12,345,2,6,7896};	
        cout<<findNumbers(vec)<<endl;
}