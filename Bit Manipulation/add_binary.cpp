#include <bits/stdc++.h>
using namespace std;
     string addBinary(string a, string b) {
        int len1 = a.length();
        int len2 = b.length(), remainder = 0;
        --len1;
        --len2;
        string s = "";
        while(len1>=0 && len2 >= 0){
            int temp1 =  a[len1] -'0';
            int temp2 = b[len2] - '0';
            if(temp1 == 1 && temp2 == 1){
                if(remainder>0){
                    s = "1"+s;

                }else {
                    s = "0" + s;
                    remainder = 1;
                }
            }
            else if(temp1 == 0 && temp2 == 0){
                if(remainder>0){
                    s = "1" + s;
                    remainder  = 0;
                }
                else{
                    s = "0"+s;
                }
            }
            else {
                  if(remainder>0){
                    s = "0" + s;
                }
                else{
                    s = "1"+s;
                }
            }
            len1--;
            len2--;
        }
        while(len1 >=0){
            
            int temp1 =  a[len1] -'0';
            if(temp1 ==1){
                if(remainder>0){
                    s = "0"+s;

                }
                else {
                    s = "1" + s;
                }
            }
            else if(temp1 == 0){
                if(remainder>0){
                    s = "1"+s;
                    remainder = 0;

                }
            }
            --len1;
        }
        while(len2 >=0){
            
            int temp1 =  b[len2] -'0';
            if(temp1 ==1){
                if(remainder>0){
                    s = "0"+s;

                }
                else {
                    s = "1" + s;
                }
            }
            else if(temp1 == 0){
                if(remainder>0){
                    s = "1"+s;
                    remainder = 0;

                }
                else {
                    s = "0" + s;
                }
            }
            --len2;
        }
        if(remainder>0){
            s = "1" +s;

        }
        return s;

    }
int main(){
        string  a ="100010", b ="11";

        cout<<addBinary(a,b)<<endl;	
}