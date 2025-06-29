#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1342. Number of Steps to Reduce a Number to Zero
 int numberOfSteps(int num) {
        if(num == 0 ) return 0;
        if((num&1) == 0){
            return 1+ numberOfSteps(num/2);
        }
        else return 1+ numberOfSteps(num-1);
    }

int main(){
        	cout<<numberOfSteps(123)<<endl;
}