#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int unset(int n , int i){
    return n & ~(1<<i);
}
int main(){
        	cout<<unset(13,2)<<endl;
}