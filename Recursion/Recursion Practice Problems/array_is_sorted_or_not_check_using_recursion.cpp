#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool helper(vector<int>& arr, int index){
    if(index>= arr.size()-1) return true;
    else if(arr[index] <= arr[index+1]) {
        return helper(arr, ++index);
    }
    else return false;
}
bool check(vector<int>& arr){
return helper(arr, 0);
}
int main(){
        	vector<int> vec = {2,3,4,5,1,6,7,7,8};
            cout<<check(vec)<<endl;
}