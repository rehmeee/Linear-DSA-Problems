#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 1047. Remove All Adjacent Duplicates In String
string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i<s.length(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
            else st.push(s[i]);
        }
        s.clear();
        while (!st.empty())
        {
            s.insert(s.begin(), st.top());
            st.pop();
        }
        return s;
        
}
int main(){
    string s = "abbaca";	
    cout<<removeDuplicates(s)<<endl;
    
}