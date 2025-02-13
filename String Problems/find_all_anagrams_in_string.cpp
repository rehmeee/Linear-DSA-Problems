#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
        string s = 	 "cbaebabacd";
        string  p = "abc";
        string  temp = "";
        sort(p.begin(),p.end());
        vector<int> vec ;
        int j = 0, i = 0;
        map<int, string> m ;
        while (j<p.length())
        {
            temp += s[j];
            j++;
        }
        cout<<temp<<endl;
        while(j<= s.length()){
            string temp2 = temp;
            sort(temp2.begin(), temp2.end());
            m.emplace(i, temp2);
            temp.erase(0,1);
            temp += s[j];
            i++;
            j++;

        }

        for(auto x: m){
            if(x.second == p){
                vec.push_back(x.first);
            }
        }
        for(auto x: vec){
            cout<<x<<endl;
        }
        




}