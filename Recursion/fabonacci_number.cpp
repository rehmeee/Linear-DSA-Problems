#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 509. Fibonacci Number
 int fib(int n) {
        if(n == 0){
            return 0;
        }
        else if( n == 1) 
            return 1;

        else 
            return fib(n-1) + fib(n-2);
    }
int main(){
        	int n = 3;
            cout<<fib(n)<<endl;
}