#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int sumOfNumber(int n){
    if(n<1)return 0;
    int r = n %10;
    return r + sumOfNumber(n/10);
}
int main(){
    cout<<sumOfNumber(1423)<<endl;
}