#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 48. Rotate Image
 void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0 ; i< n ; ++i){
            for(int j  = i+1; j<n ;++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(auto &x : matrix){
            reverse(x.begin(), x.end());
        }
        for(auto x: matrix){
            for(auto y: x){
            cout<<y;
            }
            cout<<""<<endl;
        }
    }
int main(){
        	vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
            rotate(vec);
}