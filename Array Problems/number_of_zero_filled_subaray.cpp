#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {
        long long no=0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==0){
                int j = i;
                while (j<nums.size() && nums[j] == 0)
                {
                    if(nums[j]==0) no++;
                    j++;
                }
                
            }
        }
        return no;

}
int main(){
        	vector<int> vec = {0,0,0,2,0,0};
            cout<<zeroFilledSubarray(vec)<<endl;
}