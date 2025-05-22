#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 442. Find All Duplicates in an Array
 vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> vec ;
        for(auto x: nums){
            if(set.find(x) != set.end()){
                vec.push_back(x);
                continue;
            }
            set.insert(x);

        }
        return vec;
    }
int main(){
        	vector<int> vec = {4,3,2,7,8,2,3,1};
            vec = findDuplicates(vec);
            for(auto x:vec){
                cout<<x<<endl;
            }
}