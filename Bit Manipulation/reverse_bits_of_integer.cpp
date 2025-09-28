#include <bits/stdc++.h>
using namespace std;
    
int main(){
        int x = -100;
        int temp =0;
        for(int i = 0 ; i < 32; ++i){
            int l = x& 1;
            temp |= l;
            x>>=1;
            temp<<=1;
        }
        temp>>=1;
        cout<<bitset<32>(temp)<<endl;
        cout<<temp<<endl;
}