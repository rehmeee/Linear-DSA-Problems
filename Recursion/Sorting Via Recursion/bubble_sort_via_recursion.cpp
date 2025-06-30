#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void sortarr(vector<int>& vec, int end, int cur){
    if(end ==vec.size() -2) return ;
    else if(cur  == end )  sortarr(vec, ++end, vec.size()-1);
    else if(vec[cur]>vec[cur-1]){
        swap(vec[cur], vec[cur-1]);
        sortarr(vec, end , --cur );
    }
    else {
        sortarr(vec, end, --cur);
    }
}
int main(){
        	vector<int> vec = {3,5,3,6,3,2,1,8,0,45,8};
            sortarr(vec, 0, vec.size()-1);
            for(auto x: vec){
            cout<<x<<endl;
            }
}