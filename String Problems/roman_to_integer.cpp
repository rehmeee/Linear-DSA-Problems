#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int romanToInt(string s) {
        unordered_map<string, int> map;
        map["I"] = 1;
        map["V"] = 5;
        map["IV"] = 4;
        map["IX"] = 9;
        map["X"] = 10;
        map["XC"] = 90;
        map["XL"] = 40;
        map["L"] = 50;
        map["C"] = 100;
        map["D"] = 500;
        map["M"] = 1000;
        map["CM"] = 900;
        map["CD"] = 400;
        int l = s.length(), i = 0, res = 0;
        
        while ( i < l)
        {
            string temp = "";
            temp += s[i];
            if(s[i] == 'C' || s[i] == 'I' || s[i] == 'X' && i<l-1){
                temp += s[i+1];
                if(map.find(temp) != map.end()){
                    res += map[temp];
                    i +=2;
                    continue;
                    
                }
                else {
                    temp = "";
                    temp += s[i];
                    res += map[temp];
                    i++;
                    continue;
                }
            }
            else {
                res += map[temp];
                i++;
            }
        }
         return res;
        
        
}
int main(){
        	string s = "III";
            cout<<romanToInt(s)<<endl;
}