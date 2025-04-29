#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;
// 17. Letter Combinations of a Phone Number
vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) return {};
        unordered_map<int, string> map;
        map[2] = "abc";
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";
        vector<string> vec;
        for(auto x: digits){
            vec.push_back(map[x-'0']);
        }
        string temp = vec[0];
        vector<string> res;
        for(auto x: temp){
            string s = "";
            s+= x;
            res.push_back(s);
        }
        for(int i = 1 ; i<vec.size() ; i++){
            temp = vec[i];
            vector<string> tempv;
            for(int j = 0 ; j<res.size(); j++){
                string a = res[j];
                for(auto x: temp){
                    string s = "";
                    s+= a;
                    s+= x;
                    tempv.push_back(s);
                }
            }
            res = tempv;
        } 
        return res;

    }
int main(){
        	vector<string> vec = letterCombinations("");
            for(auto x :vec){
                cout<<x<<endl;
            }
}