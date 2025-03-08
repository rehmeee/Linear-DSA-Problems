#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> map;
        cout<<s.length()<<endl;

        for(auto x: words){
            map[x]++;
        }
        int left= 0 ,  wordLength = words[0].length();
        vector<int> nums;
        for(int right=wordLength*words.size()-1; right<s.length(); right++){
            unordered_map<string, int> map2;
            for(int i = left; i<=right; i+=wordLength){
                string temps ="";
                for(int j = i; j<wordLength +i; j++){
                    temps+=s[j];
                }
                map2[temps]++;

            }
            if(map == map2) nums.push_back(left);
            left++;
        }
        return nums;

}
int main(){
   string s = "lingmindraboofooowingdingbarrwingmonkeypoundcake";
   vector<string> words = {"fooo","barr","wing","ding","wing"};
   vector<int> vec = findSubstring(s, words);
   for(auto x: vec){
    cout<<x<<endl;
   }

	
}