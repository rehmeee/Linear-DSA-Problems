#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
// this is through iterative method
// int rev(int n){
//     int res = 0;
//     while(n>9){
//         res = (res *10) + n%10;
//         n/=10;

//     }
//     res = (res)*10 +n;
//     return res;
// }

int helper(int n, int digits){
    if(n%10 == n) return n;
    int rem = n%10;
    return rem * (int) pow(10, digits-1) + helper(n/10, digits-1);
}
int rev(int n ){
    int digits = (int) log10(n) +1;
    return helper(n, digits);

}
int main(){
        	cout<<rev(2345)<<endl;
}