#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 75. Sort Colors
int partition(vector<int>& nums, int low, int high){
    int pivot = nums[high];
    int i = low-1;
    for(int j = low; j< high; ++j){
        if(nums[j]< pivot){
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i+1] , nums[high]);
    return i+1;
}
void quickSort(vector<int>& nums, int low, int high){
    if(low< high){
        int pi = partition(nums, low, high);
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi+1, high);

    }
}
void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
    }
int main(){
        	vector<int> vec = {2,0,2,1,1,0};
            sortColors(vec);
            for(auto x: vec){
                cout<<x<<endl;
            }
}