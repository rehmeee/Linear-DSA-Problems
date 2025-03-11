#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 121. Best Time to Buy and Sell Stock
int maxProfit(vector<int>& prices) {
        int currentMin =prices[0], maxProfit = 0;
        for(int i = 0; i<prices.size()-1; i++){
            if(currentMin>=prices[i+1]){
                currentMin = prices[i+1];
                continue;
            }
            else {
                maxProfit = max(maxProfit, prices[i+1]-currentMin);
            }
        }
        return maxProfit;

}
int main(){
        	vector<int> vec = {9,8,9,10,3,7};
            cout<<maxProfit(vec)<<endl;
}