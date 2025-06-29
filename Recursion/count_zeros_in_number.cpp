#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int countZero(int n){
    if(n<9) return 0;
    int r = n%10;
    if(r==0){
        return 1+countZero(n/10);
    }
    else return countZero(n/10);
}
int main(){
        cout<<countZero(205040)<<endl;	
}