#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int helper(vector<int>& arr, int index, int target){
    if(index== arr.size()) return -1;
    else if(arr[index] == target) {
        return index;
    }
    else return helper(arr, index+1, target);
}
int check(vector<int>& arr, int target){
return helper(arr, 0, target);
}
int main(){
        	vector<int> vec = {2,5,33,5,3,64,7};
            cout<<check(vec, 6)<<endl;
}