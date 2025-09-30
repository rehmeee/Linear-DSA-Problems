#include <bits/stdc++.h>
using namespace std;
// 1318. Minimum Flips to Make a OR b Equal to c
 int minFlips(int a, int b, int c) {
     int i = 0 , count = 0;
     while (i<31)
     {
            int temp1 = a&(1<<i), temp2 = b&(1<<i), temp3 = c&(1<<i);
            if((temp1 | temp2) == temp3){
                ++i;
                continue;
            }
            else {
                if(temp1 != temp3){
                    a^= (1<<i);
                    ++count;
                    continue;
                }
                if(temp2 != temp3){
                    b ^= (1<<i);
                    ++count;
                }
            }

            
        }
        return count;
        
    }    
int main(){
        cout<<minFlips(4,2,7)<<endl;	
}