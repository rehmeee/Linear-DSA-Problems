#include <bits/stdc++.h>
using namespace std;
    
int main(){
        int n = 15, count = 0;
        while(n>0)	{
            n &= (n-1);
            ++count;
        }
        cout<<count<<endl;
}