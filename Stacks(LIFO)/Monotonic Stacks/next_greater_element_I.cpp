#include<iostream>
#include<stdio.h>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> map;
        int n = nums1.size();
        vector<int> ans(n,-1);
        for(int i = 0 ; i<nums2.size(); i++){
                while(!st.empty() && nums2[st.top()]< nums2[i]){
                    map[nums2[st.top()]] = nums2[i];
                    st.pop();
                }
                st.push(i);
        }
        for(int i = 0 ; i<n; i++){
                if(map.find(nums1[i]) == map.end()){
                    ans[i] = -1;
                }
                else {
                    ans[i] = map[nums1[i]];
                }
        }
        return ans;
    }
int main(){
        	vector<int> nums1 = {2,4}, nums2 = {1,2,3,4};
            vector<int> vec = nextGreaterElement(nums1, nums2);
            for(auto x: vec) cout<<x<<endl;
}