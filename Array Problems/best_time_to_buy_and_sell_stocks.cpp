#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 122. Best Time to Buy and Sell Stock II
int maxProfit(vector<int>& prices) {
    int m=0;
    for(int i = 0 ; i<prices.size()-1; i++){
        if(prices[i]>prices[i+1])continue;
        else if(prices[i]<prices[i+1]) m+= prices[i+1]-prices[i];
        else continue;
    }
    return m;
}
int main(){
        	vector<int> vec = {1,2,3,4,5};
            cout<<maxProfit(vec)<<endl;
}