#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
stack<string> reverseString(string s){
    stack<string> vec;
    stringstream ss(s);
    string word;
    while(ss>>word){
        vec.push(word);
    }
    s = "";
    while(!vec.empty()){
        s += vec.top() + " ";
        vec.pop();
    }
    s = s.erase(s.length()-1);
    cout<<s<<endl;
    return vec;
    

}
int main(){
        	string s = " i like    you";
            stack<string> vec = reverseString(s);
            while(!vec.empty()){
                cout<<vec.top()<<endl;
                vec.pop();
            }
             
}   