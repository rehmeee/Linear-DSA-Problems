#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 134. Gas Station
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = gas.size();
         vector<int> index;
         for(int i = 0 ; i<n; ++i){
            if(gas[i]> cost[i]) index.push_back(i);
         }
         for(auto x: index){
            int remains=0;
            bool flag = true;
            for(int i = x; i< n ; ++i){
                remains += gas[i] - cost[i];
                if(remains<0) {
                    flag = false;
                    break;
                }

            }
            if(!flag) continue;
            for(int i = 0 ; i < x; ++i){
                remains += gas[i] - cost[i];
                if(remains<0) {
                    flag = false;
                    break;
            }
        }
            if(!flag) continue;
            else return x;
            
            
         }

         return -1;
        }

int main(){
        vector<int> gas ={1,2,3,4,5};
        vector<int>  cost = {3,4,5,1,2};
        cout<<canCompleteCircuit(gas, cost)<<endl;	
}