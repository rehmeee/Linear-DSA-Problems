#include <bits/stdc++.h>
using namespace std;
    
int main(){
        int x = 9;
        if( (x & (x-1)) == 0){
            cout<<"no is already in 2's power"<<endl;
        }

        auto temp = log2(x);
        int digitsToMove = ceil(temp);
        x ^= (1<<digitsToMove);
        x &= (1<<digitsToMove);
        cout<<x<<endl;
}