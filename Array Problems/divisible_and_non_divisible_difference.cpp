#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int differenceOfSums(int n, int m) {
    int sum1 = 0, sum2 = 0;
        for(int i = 1; i <= n ;++i){
            if(i%3 != 0) sum1+=i;
            else sum2+=i;
        }
        return sum1-sum2;
    }
int main(){
        	int     n = 10, m = 3;
            cout<<differenceOfSums(n,m)<<endl;
}