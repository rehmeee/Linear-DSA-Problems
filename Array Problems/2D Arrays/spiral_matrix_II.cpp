#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 59. Spiral Matrix II
vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));
        int val = 1;
        int top = 0, bottom = n-1, left = 0, right = n-1;
        while(top<=bottom && left<= right){
            for(int  i = left ; i<= right; ++i){
                vec[top][i] = val++;
            }
            top++;
            for(int i = top; i<=bottom; ++i){
                vec[i][right] = val++;
            }
            --right;
            for(int i = right ; i>=left; i--){
                vec[bottom][i] = val++;
            }
            bottom--;
            for(int i = bottom; i>=top; i--){
                vec[i][left] = val++;
            }
            left++;
        }
        return vec;
    }
int main(){
        	vector<vector<int>> vec = generateMatrix(2);
            for(auto x: vec){
                for(auto y: x){
                cout<<y;
                }
                cout<<""<<endl;
            }
}