#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
string intToRoman(int num) {
        unordered_map<int, char> map;
        int temp =1;
        string s="";
        while (num>0)
        {
            if(num>=1000){
                s+="M";
                num -=1000;
            }
            else if(num>=900){
                s+="CM";
                num-=900;
            }
            else if(num>=500){
                s+="D";
                num-=500;
            }
            else if(num>=100){
                s+="F";
                num-=100;
            }
            else if(num>=90){
                s+="XF";
                num-=90;
            }
            else if(num>=50){
                s+="L";
                num -=50;
            }
            else if(num>=40){
                s+="XL";
                num-=40;
            }
            else if(num==9){
                s+="IX";
                num-=9;
            }
            else {
                s+="I";
                num--;
            }
        }
        
}
int main(){
        	int n = 58;
            cout<<intToRoman(n)<<endl;
}