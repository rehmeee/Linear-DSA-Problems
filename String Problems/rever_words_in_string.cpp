#include <bits/stdc++.h>
using namespace std;
    string reverString(string s){
        int len = s.length(), j = 0 ;
        if(len<=1) return s;
        for(int i = 0  ; i < len ; ++i){
            if(s[i] == ' '){
                int temp = i-1;
                while (j<temp)
                {
                    swap(s[j++], s[temp--]);
                }
                j = i+1;
                
            }
        }
        int temp = len-1;
        while(j<temp){
            swap(s[j++], s[temp--]);
        }
        return s;

        
    }	
int main(){
        cout<<reverString("rehman ali")<<endl;	
}