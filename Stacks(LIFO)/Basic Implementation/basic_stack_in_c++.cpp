#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int main(){
        stack<int> st;
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        while (!st.empty())
        {
            cout<<st.top()<<endl;
            st.pop();
        }
        
}