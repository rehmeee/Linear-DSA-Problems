#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int binarySearch(vector<int>& arr,  int l , int r, int t){
    if(l>=r)return -1;
    int mid = (l+r)>>1;
    if(arr[mid] == t) return mid;
    else if(arr[mid]>t)
        return binarySearch(arr, l, mid-1, t);
    else 
        return binarySearch(arr, mid+1, r, t);




}
int main(){
        vector<int> vec = {1,2,3,4,5,6,7};	
        cout<<binarySearch(vec, 0, vec.size()-1, 6)<<endl;
}