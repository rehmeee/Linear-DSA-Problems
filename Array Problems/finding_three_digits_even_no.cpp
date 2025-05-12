#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 2094. Finding 3-Digit Even Numbers
 vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> set;
        int n = digits.size();
        vector<int> vec;
        for(int i = 0  ; i <n ; ++i ){
            if(digits[i] == 0) continue;
            for(int j = 0 ; j< n; ++j){
                if(j == i) continue;
                for(int k = 0 ; k<n; ++k){
                    if(k == i || k == j) continue;
                    int num = 0;
                    num = num * 10 + digits[i];
                    num = num* 10 + digits[j];
                    num = num* 10 + digits[k];
                    if(num %2 == 0) set.insert(num);
                }
            }
        }
        for(auto x: set){
            vec.push_back(x);
        }
        sort(vec.begin() , vec.end());
        return vec;
        
    }
int main(){
    vector<int> vec = {3,7,5};       	
    vec = findEvenNumbers(vec);
    for(auto x: vec){
        cout<<x<<endl;
    }
}