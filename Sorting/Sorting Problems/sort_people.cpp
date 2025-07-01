#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2418. Sort the People
 vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int s = heights.size();
        for(int i = s-1; i>0; --i){
            int minIndex = i;
            for(int j = i ; j>=0; --j){
                if(heights[j]< heights[minIndex]){
                    minIndex = j;
                }
            }
            swap(heights[i], heights[minIndex]);
            swap(names[i], names[minIndex]);
        }
        return names;
    }
int main(){
        	vector<int> vec = {180,165,170};
            vector<string> vec2 = {"Mary","John","Emma"};
            vec2 = sortPeople(vec2, vec);
            for(auto x: vec2){
            cout<<x<<endl;
            }

}