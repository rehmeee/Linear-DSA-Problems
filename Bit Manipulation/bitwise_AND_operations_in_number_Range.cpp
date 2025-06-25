#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 201. Bitwise AND of Numbers Range
 int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while (left!= right)
        {
            left>>=1;
            right>>=1;
            ++cnt;
        }
        return left<<cnt;
        
        

    }
int main(){
        cout<<rangeBitwiseAnd(2,4)<<endl;
}