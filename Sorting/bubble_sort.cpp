#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
        vector<int> vec = {30,6,33,4,2,5,3,5,6,4,3,0};
        int s = vec.size();
        for(int i = 0 ;i <s-1; ++i){
            int j = s-1 ;
            while (j>i)
            {
                if(vec[j]>vec[j-1]) swap(vec[j], vec[j-1]);
                --j;
            }
            
        }
        for(auto x: vec){
        cout<<x<<endl;
        }
        	
}