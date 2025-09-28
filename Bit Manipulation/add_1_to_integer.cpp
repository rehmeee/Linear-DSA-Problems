#include <bits/stdc++.h>
using namespace std;
    
int main(){
        // int x = -4;

        // cout<<bitset<3>(x)<<endl;

        // int y = 12;
        // cout<<bitset<10>(y)<<endl;
        // int temp = y  & (1<<2);
        // cout<<bitset<10>(temp)<<endl;
        // if(temp>0){
        //     cout<<"yes bit is set"<<endl;
        // }
        // int z = y^ (1<<2);
        // cout<<z<<endl;

        // cout<<bitset<10>(z)<<endl;
        
        
        // int s = 12;
        // int temp2 = s & (s-1);
        
        // cout<<bitset<10>(temp2)<<endl;

        // int c = 16;
        // int temp3 = c & (c-1);
        // if( temp3== 0){
        //     cout<<"yes this is the powe of two"<<endl;
        // }


        // auto a =log(16) / log(3);
        // cout<<ceil(a) << floor(x)<<endl;

        // vector<char> vec = {'a', 'B', 'c', '9'};
        // for(auto& x: vec){
        //    x =  x^ ' ';
        // }
        // for(auto x: vec){
        // cout<<x<<endl;
        // }

        int x = 65, y = 56;
        int temp = x ^ y;
        int count = 0;
        while(temp>0){
            int a = temp & 1;
            if(a == 1){
                ++count;
            }
            temp = temp>>1;
        }
        cout<<count<<endl;
}