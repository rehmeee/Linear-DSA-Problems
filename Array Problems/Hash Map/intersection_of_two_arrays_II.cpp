#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 350. Intersection of Two Arrays II
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> vec;
        for(auto x: nums1){
            map[x]++;
        }
        for(auto x: nums2){
            if(map.find(x) != map.end() && map[x] > 0){
                map[x]--;
                vec.push_back(x);
            }
        }
        return vec;
    }
int main(){
        	vector<int> vec = {4,9,5};
        	vector<int> vec2 = {9,4,9,8,4};
            vec = intersect(vec, vec2);
            for(auto x: vec){
                cout<<x<<endl;
            
            }
}
