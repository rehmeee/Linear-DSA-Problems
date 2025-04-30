#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 4. Median of Two Sorted Arrays
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median  ;
        vector<int> vec;
        int temp1 = 0 , temp2 = 0, s1 = nums1.size(), s2 = nums2.size();
        while (temp1<s1 || temp2< s2)
        {
            if(temp1<s1 && temp2<s2){
                if(nums1[temp1]<= nums2[temp2]){
                    vec.push_back(nums1[temp1++]);

                }else {
                    vec.push_back(nums2[temp2++]);
                }
            }
            else if(temp1<s1){
                vec.push_back(nums1[temp1++]);
            }
            else if(temp2<s2){
                vec.push_back(nums2[temp2++]);
            }
        }
        int s = vec.size();
        if(s%2== 0){
            median = (vec[s/2] + vec[(s/2)-1])/2.0;
        }
        else {
            median = vec[s/2];
        }
        return median;
        

}
int main(){
    vector<int> nums1 = {1,2}, nums2 = {3,4};
    cout<<findMedianSortedArrays(nums1, nums2)<<endl;
}