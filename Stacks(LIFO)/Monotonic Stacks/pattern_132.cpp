#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool find132pattern(vector<int>& nums) {
    int n = nums.size();
            vector<int> left(n,0);
            int temp = nums[0];
            vector<int> right(n,0);
            for(int i = 1; i<n; i++){
                left[i] = temp;
                temp = min(temp, nums[i]);
            }
            temp = nums[n-1];
            for(int i = n-2; i>=0; i--){
                right[i] = temp;
                temp = min(temp, nums[i]);
            }
            for(int i = 1 ; i<n-1; i++){
                    if(left[i] < right[i] && right[i] < nums[i]) return true;
            }
            return false;
}
int main(){
        	vector<int> vec = {-1,3,2,0};
            cout<<find132pattern(vec)<<endl;
}