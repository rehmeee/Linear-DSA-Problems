#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
 double myPow(double x, int n) {
       long long no = n;
       double res =1;
       if(n<0) no = -1 * n;
       while(no){
        if((no&1) !=1){
           x *=x ;
           no= no>>1;
        }
        else {
            res *=x;
            --no;
        }
       }
       if(n<0)  res = (double) 1/ (double) res;
       return res;
    }
int main(){
        cout<<myPow(2.00000, -2)<<endl;
}