#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums){
    int n = nums.size();
    vector<int> vec(n, -1);
    stack<int> st;
    for(int i = 0  ; i<n; i++){
            while (!st.empty() && nums[st.top()]>nums[i])
            {
                vec[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
    }
    return vec;
}
int main(){
    vector<int> nums = {2, 1, 4, 3};
    vector<int> result = nextGreaterElement(nums);

    for (int x : result) cout << x << " ";
    return 0;	
}