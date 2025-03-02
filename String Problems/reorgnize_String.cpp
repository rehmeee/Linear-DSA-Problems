#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
string reorgnize(string s){
    sort(s.begin(), s.end());
    map<int, char> um;
    int l = s.length();
    for(int i = 0 ; i <s.length(); i++){
        um[i] = s[i];
    }
    for(auto x: um){
        cout<<x.second<<endl;
    }
    s = "";
    char temp = um[0];
    um.erase(0);
    s +=temp;
    for(int i = 0; i< l -1; i++ ){
       for(auto x: um){
        if(x.second == temp ){
            continue;
        }
        else {
            temp = x.second;
            um.erase(x.first);
            break;
        }
       }
       if(s[s.length()-1] == temp) return "";
       s+=temp;


    }
    cout<<s<<endl;
    return "";
}
int main(){
        string s = "vvvlo";	
        cout<<reorgnize(s)<<endl;
}