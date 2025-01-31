#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,1,2,3};
    int len = nums.size();
    int k = 2;
    for(int i = 0 ; i<len ; i++){
        for(int j = len-1; j>i;j--){
            if(i == j || nums[i] != nums[j] || abs(i-j)>k){
                cout<<"true";
                break;
            }
        }

    }
    cout<<"false";
}