#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 32. Longest Valid Parentheses

            int longestValidParentheses(string s) {
                stack<int> st;
                st.push(-1);
                int max_len = 0;
        
                for (int i = 0; i < s.length(); i++) {
                    if (s[i] == '(') {
                        st.push(i);
                    } else {
                        st.pop();
                        if (st.empty()) {
                            st.push(i);
                        } else {
                            max_len = max(max_len, i - st.top());
                        }
                    }
                }
        
                return max_len;        
            }
        

int main(){
        	string s = "()(())";
            cout<<longestValidParentheses(s)<<endl;
}