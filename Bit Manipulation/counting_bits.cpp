#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 338. Counting Bits
int hammingWeight(int n) {
        int count = 0 ;
        for (int i = 0; i <=20; ++i)
        {
            if((n&(1<<i)) != 0) ++count;
        }
        return count;
        
    }
vector<int> countBits(int n) {
    vector<int> vec;
        for(int i = 0 ; i<=n; ++i){
            vec.push_back(hammingWeight(i));
        }
        return vec;
    }
int main(){
        	int n = 2;
            vector<int> vec = countBits(n);
            for(auto x: vec )
                cout<<x<<endl;

}