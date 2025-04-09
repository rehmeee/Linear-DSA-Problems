#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
vector<string> findRepeatedDnaSequences(string s) {
    if(s.length() < 10) return {};
        int l = 0  , r = 0;
        unordered_set<string> set;
        unordered_set<string> set2;
        string temp = "";
        while (r<10)
        {
            temp += s[r++];
            
        }
        while (r<=s.length())
        {
         if(set.find(temp) == set.end()){
            set.insert(temp);
            temp.erase(0,1);
            temp += s[r++];
            
        }  
        else {
            set2.insert(temp);
            temp.erase(0,1);
            temp += s[r++];

         } 

        }
        vector<string> vec(set2.begin(), set2.end());
        return vec;
        
        

}
int main(){
        	    string s ="AAAAAAAAAAA";
                vector<string> vec = findRepeatedDnaSequences(s);
                for(auto x : vec){
                    cout<<x<<endl;
                }
}