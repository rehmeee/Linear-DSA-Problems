#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 793 daily tempreatuers
vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> vec(n,0);
        stack<int> st;
        for(int i = 0 ; i<n; i++){
                while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                    vec[st.top()] = i-st.top();
                    st.pop();
                }
                st.push(i);
        }
        return vec;
}
int main(){
        	vector<int> vec = {30,60,90};
            vector<int> vec2 = dailyTemperatures(vec);
            for(auto x: vec2) cout<<x<<endl;
}