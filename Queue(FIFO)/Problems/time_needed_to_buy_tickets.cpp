#include <iostream>
#include <stdio.h>
// #include >
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
// 2073 time needed to buy tickets 

int timeRequiredToBuy(vector<int> &tickets, int k)
{
   queue<pair<int, int>> q;
    for(int i = 0 ; i<tickets.size(); i++){
            q.push({i, tickets[i]});
    }
    int time = 0;
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        p.second--;
        time++;
        if(p.first == k && p.second == 0){
            return time;
        }
        if(p.second>0) q.push(p);


    }
    return time;
}
int main()
{
    vector<int> vec = {5,1,1,1};
    int k = 0;
    cout<<timeRequiredToBuy(vec, k)<<endl;
}