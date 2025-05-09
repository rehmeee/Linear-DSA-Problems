#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
int numPairsDivisibleBy60(vector<int>& time) {
        if(time.size()<2) return 0;
        int res = 0;
        vector<int> vec(60);
        for(auto x: time){
            res += vec[((600-x) %60)];
            vec[(x%60)] +=1;
        }
        return res;

}
int main(){
        	vector<int> vec = {30,20,150,100,40};
            cout<<numPairsDivisibleBy60(vec)<<endl;
} 