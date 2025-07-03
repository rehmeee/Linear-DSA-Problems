#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void sort(vector<int>&vec, int low, int high){
    if(low>=high) return;
    int s = low, e = high;
    int m =  s +  (e -s)/2;
    int pivot = vec[m];
    while(s<=e){
        while(vec[s]<pivot) ++s;
        while(vec[e]>pivot) --e;
        if(s<=e){
            swap(vec[s++], vec[e--]);
        }
    }
    sort(vec, low, e);
    sort(vec, s, high);

}
int main(){
    vector<int> vec = {3,5,2,5,29,0,1,2,55,8};
    sort(vec, 0, vec.size()-1);
    for(auto x: vec){
    cout<<x<<endl;
    }
        	
}