#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 169 longest consective sequence 
int longestConsecutive(vector<int>& nums) {

       unordered_set<int> se;
       for(auto s: nums){
        se.insert(s);
       }
       int longest = 0;
       for(auto x: se){
        if(se.find(x-1) != se.end()){
            continue;
        }
        else {
            int temp = 1, nextNum = x+1 ;
            
            while(se.find(nextNum) != se.end()){
                temp++;
                nextNum +=1;
            }
            longest = max(temp, longest);
        }
       }
       return longest;
}
int main(){
       vector<int> vec = {0,3,7,2,5,8,4,6,0,1};
       cout<<longestConsecutive(vec)<<endl;

}