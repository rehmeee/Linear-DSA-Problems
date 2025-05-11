#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()< 3) return false;
        int count = 0;
        for(auto x: arr){
            if(x % 2 != 0) count++;
            else count=0;
            if(count>=3) return true;
        }
        return false;
    }
int main(){
        	vector<int> vec = {2,6,4,1};
            cout<<threeConsecutiveOdds(vec)<<endl;
}