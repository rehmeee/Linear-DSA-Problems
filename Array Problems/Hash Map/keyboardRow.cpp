#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
  vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
        unordered_set<char> set1;
        unordered_set<char> set2;
        unordered_set<char> set3;
        vector<string> vec;
        for(auto x: s1){
            set1.insert(x);
        }
        for(auto x: s2){
            set2.insert(x);
        }
        for(auto x: s3){
            set3.insert(x);
        }
        for(auto x: words){
            char t =tolower(x[0]);
            if(set1.find(t) != set1.end()){
                bool flag = true;
                for(auto y: x){
                    if(set1.find(tolower(y)) == set1.end()) { flag = false;break;}
                }
              if(flag)  vec.push_back(x);
            }
            else if(set2.find(t) != set2.end()){
                bool flag = true;
                for(auto y: x){
                    if(set2.find(tolower(y)) == set2.end()) { flag = false;break;}
                }
               if(flag) vec.push_back(x);
            }
            else if(set3.find(t) != set3.end()){
                bool flag = true;
                for(auto y: x){
                    if(set3.find(tolower(y)) == set3.end()) { flag = false;break;}
                }
              if(flag)  vec.push_back(x);
            }
        }
        return vec;


    }
int main(){
        	vector<string> vec = { "Hello","Alaska","Dad","Peace"};
            vec = findWords(vec);
            for(auto x: vec){
                cout<<x<<endl;
            }

}