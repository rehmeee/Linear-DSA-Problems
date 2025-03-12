#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 20 valid parenthisis
bool isValid(string s) {
    if(s.length() <=1) return false;
    stack<char> st;
        for(char x:s){
            if(x =='(' || x=='{' || x== '['){
                st.push(x);
            }
            else {
                if(st.size() == 0) return false;
               char temp  = st.top();
                if(temp == '(' && x == ')') st.pop();
                else if(temp == '[' && x == ']') st.pop();
                else if(temp == '{' && x == '}') st.pop();
                else return false;
            }
        }
        return st.size()>0? false: true;
}
int main(){
        	string s = "()[][";
            cout<<isValid(s)<<endl;
}