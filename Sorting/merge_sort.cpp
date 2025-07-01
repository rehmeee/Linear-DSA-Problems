#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<int> merge(vector<int> first , vector<int> second){
    int i = 0, j = 0;
    vector<int> ans;
    while (i<first.size() && j<second.size())
    {   // use < to sort the array in ascending order 
        // user > to sort the array into descending order
        if(first[i]>second[j]){
            ans.push_back(first[i++]);
        }
        else {
            ans.push_back(second[j++]);
        }
    }
    while (i<first.size())
    {
        ans.push_back(first[i++]);
    }
    while(j<second.size()){
        ans.push_back(second[j++]);
    }
    return ans;
    
    
}
vector<int> sort(vector<int> vec){
    if(vec.size() == 1) return vec;
    int mid = vec.size()/2;
    vector<int> left(vec.begin(), vec.begin()+mid);
    vector<int> right (vec.begin() + mid , vec.end());
    left = sort(left);
    right = sort(right);
    return merge(left, right);
}
int main(){
        vector<int> vec = {4,2,5,3,5,0,9,12,1};	
        vec = sort(vec);
        for(auto x: vec){
        cout<<x<<endl;
        }
}