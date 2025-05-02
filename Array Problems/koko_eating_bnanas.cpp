#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
bool check( int mid, vector<int>&piles, int h ){
    int n = piles.size();
    long long count = 0;
    for( int i = 0 ; i < n ; i++ ){
        if( piles[i] <= mid ) count++;
        else{
            if( piles[i] % mid == 0 ) count += piles[i] / mid;
            else count += (piles[i] / mid) + 1;
        }
    }
    if( count <= h ) return true;
    else return false;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = piles[0];
    for( auto i : piles ) high = max( i,high );
    int mid;
    int ans;
    while( low <= high ){
        mid = low + ( high-low )/2;
        if( check( mid, piles, h ) ){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
return ans;
        
}
int main(){
        	vector<int> vec = {312884470};
            int h = 312884469;
            cout<<minEatingSpeed(vec, h)<<endl;
}