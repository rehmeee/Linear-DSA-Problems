#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        m[0] = -1;
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i] ==0 ){
                nums[i] = -1;
            }
        }
        int temp=0, maxL =0;

        for(int i = 0; i<nums.size(); i++){
            temp += nums[i];
            if(m.find(temp) == m.end()){
                m[temp] = i;
            }
            else {
                maxL = max((i - m[temp]), maxL);
            }
        }
        return maxL;
}
int main(){
        	vector<int> vec = {0,1,1,1,1,1,0,0,0};
            cout<<findMaxLength(vec)<<endl;
}