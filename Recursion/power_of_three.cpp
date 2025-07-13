#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 326. Power of Three
 bool isPowerOfThree(int n) {
     if(n==1) return true;
     if(n%3 !=0)return false;
        return isPowerOfThree(n/3);
    }
int main(){
        	cout<<isPowerOfThree(30)<<endl;
}