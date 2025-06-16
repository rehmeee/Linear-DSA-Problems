#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 231. Power of Two
bool isPowerOfTwo(int n) {
        if(n<1) return false;
        else if((n & (n-1)) == 0 )
            return true;
        else return false;
    }
int main(){
        	int n = 32;
            cout<<isPowerOfTwo(n)<<endl;
}