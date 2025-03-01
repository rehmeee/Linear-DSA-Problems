#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 11. Container With Most Water
//https://leetcode.com/problems/container-with-most-water/description/

// brute force apprach
int maxArea(vector<int> height){
    int maxWater = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for(int j = i+1; j<height.size(); j++){
            maxWater =max(min(height[i], height[j]) * (j-i),maxWater);
        }
    }
    return maxWater;

}

 // optimal two pointer approach

int maxArea2(vector<int> height){
    int n = height.size();
    int i = 0 , j = n-1, maxWater = 0;
    while(i<j){
        maxWater = max(maxWater, min(height[i], height[j])* (j-i));
        if(height[i]<= height[j]){
            i++;
        }
        else {
             j--;
        }
    }
    return maxWater;
}
int main(){
        vector<int> height = {1,8,6,2,5,4,8,3,7};	
        cout<<maxArea2(height)<<endl;
}