#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
string longestcommontPrefix(vector<string>& strs){
            string s = "";
            for(int i =0 ;i<strs[0].length();i++){
                char temp = strs[0][i];
                for(int j = 1 ; j<strs.size(); j++){
                    if(strs[j][i] == temp){
                        continue;
                    }
                    else{
                        return s;
                    }
                }
                s +=temp;
            }
            return s;
}
int main(){
            vector<string> vec = {"dog"};

            cout<<longestcommontPrefix(vec)<<endl;

}