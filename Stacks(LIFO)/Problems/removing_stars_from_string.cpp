#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
string removeStars(string s) {
    stack<char> st;
        for(char x:s){
            if(x == '*'){
                st.pop();
            }
            else st.push(x);
        } 
        s="";
        while(!st.empty()){
            s += st.top();
            st.pop();

        }
        reverse(s.begin(), s.end());
        return s;
}
int main(){
        	string s = "erase*****";
            cout<<removeStars(s)<<endl;
}