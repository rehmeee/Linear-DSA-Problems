#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdint>
using namespace std;
// 190. Reverse Bits
 uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i = 0 ; i < 32; ++i){
            int bit = n & 1;
            res = (res<<1) | bit;
            n = n>> 1;
        }
        return res;
    }
int main(){
    uint32_t n = 00000010100101000001111010011100;
        cout<<reverseBits(n)<<endl;       	
}