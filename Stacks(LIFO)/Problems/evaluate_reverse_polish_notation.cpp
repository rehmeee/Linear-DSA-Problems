#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 150. Evaluate Reverse Polish Notation
int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x: tokens){
            if(x == "*" ||  x == "/" || x == "+" || x == "-"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(x == "*") st.push(a *b);
                else if(x == "/") st.push(a/b);
                else if(x == "+") st.push(a+b);
                else if(x == "-") st.push(a-b);
            }
            else st.push(stoi(x));
        }
        return st.top();
}
int main(){
        	vector<string> vec = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
            cout<<evalRPN(vec)<<endl;
}