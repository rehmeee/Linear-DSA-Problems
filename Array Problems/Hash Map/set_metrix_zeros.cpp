#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
// 73. Set Matrix Zeroes
void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int , vector<int>> map;
        int s = matrix.size();
        for(int i = 0 ; i < s; i++){
            vector<int> temp = matrix[i];
            for(int j = 0 ; j < temp.size(); j++){
                if(temp[j] ==0 ) map[i].push_back(j);
            }
        }
        for(auto x: map){
            vector<int>& temp = matrix[x.first];
            vector<int> temp2 = x.second;
            for(int i = 0 ; i<temp.size(); i++){
                temp[i] = 0;
            }
            unordered_set<int> set(temp2.begin(), temp2.end());

            for(int i = 0 ; i< s; i++){
                if(i == x.first) continue;
                else {
                    for(int j = 0 ; j<matrix[i].size(); j++){
                        if(set.find(j) != set.end()) matrix[i][j] =0;
                    }

                }
            }
        }
        for(auto x: matrix){
            for(auto z :x){
                cout<<z;
            }
            cout<<""<<endl;
        }
}
int main(){
        	vector<vector<int>> vec = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
            setZeroes(vec);
}