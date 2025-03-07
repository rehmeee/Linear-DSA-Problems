#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
           int left =0, maxLength = 0, contZero = 0;
           for(int right = 0; right< nums.size(); right++){
            if(nums[right] == 0){

                contZero++;
            }
            while (contZero>k)
            {
                if(nums[left] == 0 ){
                    contZero--;
                }
                left++;
            }
            maxLength = max(maxLength, (right - left +1));
            
           }
            return maxLength;
}
int main(){
        	vector<int> vec = {1,1,1,1};
            int k = 3;
            cout<<longestOnes(vec,k)<<endl;
}