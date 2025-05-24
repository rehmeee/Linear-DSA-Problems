#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
// 819. Most Common Word
//  i took a simple approach to solve this 
string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> map;
        unordered_set<string> set;
        for(auto x: banned){
            set.insert(x);
        }
        int j = 0 , n = paragraph.length();
        string temp = "";
        for(int i = 0 ; i < n ; ++i){
            if(paragraph[i] == ' ' && temp != ""){
                map[temp]++;
                temp = "";

            } else if (isalpha(paragraph[i])) temp+= tolower(paragraph[i]);
            else if(temp !=""){
                map[temp]++;
                temp = "";
            }
        } 
        if(temp != "") map[temp]++;
        temp ="";
        for(auto x: map){
            if(set.find(x.first) == set.end() && x.second >j){
                j = x.second ;
                temp = x.first;
            }
        }
        return temp;
    }
int main(){
        	string paragraph = "a.";
            vector<string>  banned = {};
            cout<<mostCommonWord(paragraph, banned)<<endl;
}