#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> arr = {2,4,5,3,5};
    set<int> s(arr.begin(), arr.end());
    for(auto x : s ){
        cout<<x<<endl;
    }
    return 0;
    
}