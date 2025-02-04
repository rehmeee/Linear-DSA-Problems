#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
        vector<int> nums1 = {0};
        vector<int> nums2 = {1};
        int m = 0, n = 1;
        int i = 0;
        while(m<nums1.size() && i<n){
            nums1[m] = nums2[i];
            m++;
            i++;
        }
        sort(nums1.begin(), nums1.end());
        for(auto x : nums1){
            cout<<x<<"\t"<<endl;
        }

}