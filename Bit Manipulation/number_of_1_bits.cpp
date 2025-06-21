#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 191. Number of 1 Bits
 int hammingWeight(int n) {
        int count = 0 ;
        for (int i = 0; i <=31; ++i)
        {
            if((n&(1<<i)) != 0) ++count;
        }
        return count;
        
    }
int main(){
        	int n = 13;
            cout<<hammingWeight(n)<<endl;
}