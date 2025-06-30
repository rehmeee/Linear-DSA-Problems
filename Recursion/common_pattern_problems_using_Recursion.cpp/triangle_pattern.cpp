#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void print(int r, int c){
    if(r==0) return;
    if(c<r) {
        print(r, ++c);
        cout<<"*";
    }
    else {
        print(--r, 0);
        cout<<""<<endl;
    }
}
int main(){
    print(4,0);
}