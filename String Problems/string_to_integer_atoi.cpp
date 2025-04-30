#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 8. String to Integer (atoi)

int myAtoi(string s) {
        int n = 0;
        for(int i = 0 ; i< s.length(); i++){
            if(isdigit(s[i])){
                while (isdigit(s[i]) && i < s.length())
                {
                    int digit = s[i] - '0';
                    if(n > (INT_MAX - digit)/10){
                       return INT_MAX; 
                    }
                        n = n * 10 + digit;
                        i++;
                }
                return n;
                
            }
            else if(s[i] == '-'){
                i++;
                while (isdigit(s[i]) && i< s.length())
                {
                    int digit = s[i] - '0';
                        if(n> (INT_MAX - digit)/ 10){
                            return -INT_MAX;
                        }
                        n = n * 10 + digit;
                        i++;
                }
                return -n;
                
            }
            else if(s[i] == '+'){
                i++;
                while (isdigit(s[i]) && i< s.length())
                {
                    int digit = s[i] - '0';
                        if(n> (INT_MAX - digit)/ 10){
                            return INT_MAX;
                        }
                        n = n * 10 + digit;
                        i++;
                }
                return n;
                
            }
            else if(s[i] == ' ')continue;
            else break;
            
        }
        return n;
}
int main(){
 string s = "-91283472332";
 cout<<myAtoi(s)<<endl;       	
}