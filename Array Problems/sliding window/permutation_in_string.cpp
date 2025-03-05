#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 567 permutation in string 
bool checkInclusion(string s1, string s2) {
        if(s1>s2) return false;
            int i = 0 , j = 0 ,l = s1.length();
            unordered_map<char,int> m1,m2;
            while(j<l){
                m1[s1[j]]++;
                m2[s2[j]]++;
                j++;
            }
        
            while(j<=s2.length()){
                bool flag = true;
                for(auto x: m1){
                    if(m2.find(x.first) != m2.end()){
                       
                            if(m2[x.first] != x.second){
                                flag = false;
                                break;
                            }
                        
                    }
                    else {
                        flag = false;
                        break;

                    }
                    
                    
                }
                if(flag) return true;
                m2[s2[i]]--;
                m2[s2[j]]++;
                i++;
                j++;

            }
           
            return false;

}
int main(){
        	string s1 = "abcdxabcde", s2 ="abcdeabcdx";
            cout<<checkInclusion(s1,s2)<<endl;
}