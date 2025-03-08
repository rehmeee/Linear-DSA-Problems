#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int trap(vector<int>& height) {
       vector<int> left(height.size());
       vector<int> right(height.size());
       int l =0;
       for(int i = 0 ; i<height.size(); i++){
              left[i] = l;
              l= max(l, height[i]);
       } 
       int r=0;
       for(int i = height.size()-1; i>=0; i--){
              right[i] = r;
              r = max(r, height[i]);
       }
       int total =0;
       for(int i = 0 ; i<height.size(); i++){
              int temp = min(left[i], right[i]);
              if(temp-height[i]>0){
                     total+= temp-height[i];
              }
       }
       return total;

       
}
int main(){
        	vector<int> vec = {4,2,0,3,2,5};
            cout<<trap(vec)<<endl;
}      