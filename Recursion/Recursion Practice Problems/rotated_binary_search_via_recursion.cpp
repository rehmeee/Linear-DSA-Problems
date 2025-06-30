#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int binarysearch(vector<int>& arr, int left, int right, int target){
    if(left>right) return -1;
    int mid = left + ((right-left)>>1);
    if(arr[mid] == target) return mid;
    else if(target>=arr[left] && target<arr[mid]){
        return binarysearch(arr, left, mid-1, target);
    }
    else if(target<arr[left] && target<arr[mid]){
        return binarysearch(arr, mid+1, right, target);
    }
    else if(target == arr[left]) return left;
    else if(target == arr[right]) return right;
    else if(target> arr[left] && arr[mid]<arr[left]){
        return binarysearch(arr, left, mid-1, target);
    }
    else if(target>arr[mid] && target<= arr[right]){
        return binarysearch(arr, mid+1, right, target);
    }
    else return binarysearch(arr, mid+1, right , target);
}
int main(){
        	vector<int> vec = {6,7,8, 1,2,3,4};
            int n = binarysearch(vec, 0, 6, 9);
            cout<<n<<endl;
}