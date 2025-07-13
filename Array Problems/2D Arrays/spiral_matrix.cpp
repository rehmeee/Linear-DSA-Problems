#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 54. Spiral Matrix
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int left = 0, right = matrix[0].size()-1, bottom = matrix.size()-1, top = 0;
    vector<int> res ;
    while (top<=bottom && left<=right)
    {
        for(int i = left; i<=right; ++i){
            res.push_back(matrix[top][i]);
        }
        ++top;
        for(int i = top; i<=bottom; ++i){
            res.push_back(matrix[i][right]);
        }
        --right;
        if(top<=bottom){
            for(int i = right; i>=left; --i){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom; i>=top; --i){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return res;
    
          
    }
int main(){
        	vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
            vector<int> vec2 = spiralOrder(vec);
            for(auto x: vec2){
            cout<<x<<endl;
            }
}