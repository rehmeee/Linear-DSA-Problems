#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1014. Best Sightseeing Pair
int maxScoreSightseeingPair(vector<int>& values) {
        int first = values[0], maximum = 0;
        for(int i = 1; i<values.size(); i++){
            int second = values[i]-i;
            maximum = max(maximum, first+second);
            first = max(first, values[i]+i);

        }
        return maximum;
}
int main(){
        	vector<int> vec = {8,1,5,2,6};
            cout<<maxScoreSightseeingPair(vec)<<endl;
}