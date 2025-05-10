#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int maxFreqSum(string s)
{
    unordered_map<char, int> v;
    unordered_map<char, int> c;
    for(auto x : s){
        if(x == 'a'|| x == 'e' ||   x == 'i' || x== 'o' || x == 'u'){
            v[x]++;
        }
        else {
            c[x]++;
        }
    }
    int n = 0, m =0;
    for(auto x: v){
        if(x.second > n) n = x.second;
    }
    for(auto x: c){
        if(x.second > m) m = x.second;
    }
    return m+n;
    

}
int main()
{
    string s = "successes";
    cout<<maxFreqSum(s)<<endl;
}