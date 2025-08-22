#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 575. Distribute Candies
        int distributeCandies(vector<int>& candyType) {
        unordered_set<int> set;
        int maxCandies = candyType.size()/2;
        for(auto x: candyType){
            set.insert(x);
        }
        return min(maxCandies, (int)set.size());

    }	
int main(){
        	vector<int> vec = {3,3,3,3};
            cout<<distributeCandies(vec)<<endl;
}