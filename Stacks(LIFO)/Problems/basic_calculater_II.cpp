#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 227. Basic Calculator II
int calculate(string s) {
    s += '+';
    stack<int> stk; 
    
    long long int ans = 0, curr = 0;
    char sign = '+'; //to store the previously encountered sign
    
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])) curr = curr*10 + (s[i]-'0'); //keep forming the number, until you encounter an operator
        
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            
            if(sign == '+') stk.push(curr); //'Cause it has to added to the ans
        
            else if(sign == '-') stk.push(curr*(-1)); //'Cause it has to be subtracted from ans
            
            else if(sign == '*'){
                int num = stk.top(); stk.pop();  //Pop the top of the stack
                stk.push(num*curr); //Multiply it with the current value & push the result into stack
            }
            
            else if(sign == '/'){
                int num = stk.top();stk.pop(); 
                stk.push(num/curr);  //Divide it with curr value & push it into the stack
            }
            
            curr = 0; 
            sign = s[i]; 
        }
        
    }
    
    while(stk.size()){
        ans += stk.top(); stk.pop();
    }
        
    return ans; 

}
int main(){
        	string s = "1-1-1";
            cout<<calculate(s)<<endl;
}