#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void sort(vector<int>& vec, int start,int minIndex, int cur){
    if(start==vec.size()-1) return;
    else if(cur == vec.size()){
        swap(vec[start], vec[minIndex]);
        sort(vec,start+1, start+1, start+1 );
    }
    else if(vec[minIndex]>vec[cur]){
        sort(vec, start, cur, cur+1);
    }
    else {
        sort(vec, start, minIndex, ++cur);
    }
}
int main(){
        	vector<int> vec = {6,0,1};
            sort(vec, 0, 0, 0);
            for(auto x: vec){
            cout<<x<<endl;
            }
}