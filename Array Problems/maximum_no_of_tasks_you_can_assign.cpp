#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
       unordered_map<int, int> map ;
       int maximum = *max_element(workers.begin(), workers.end());
       
       for(auto x: workers){
        map[x]++;
       }
       int count =0;
       for(int i = 0 ; i< tasks.size(); i++){
        int temp = tasks[i];
        
       }
}
int main(){
   vector<int>  tasks = {5,9,8,5,9}, workers = {1,6,4,2,6};
   int pills = 1, strength = 5;
   cout<<maxTaskAssign(tasks, workers, pills, strength)<<endl;
}