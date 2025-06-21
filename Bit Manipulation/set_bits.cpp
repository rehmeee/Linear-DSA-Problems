#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
        int n = 13;
        if((n & (1<<2)) != 0){
            cout<<"last bit is set"<<endl;
        }
        else 
            cout<<"this bit is not set"<<endl;

}