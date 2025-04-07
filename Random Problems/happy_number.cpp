#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int sum(int n){
    int s = 0;
    while (n>9)
    {
        int temp = n%10;

        s+= temp * temp;
        n/=10; 

    }
    return s += n *n;
    
}
bool isHappy(int n) {
        int number = n;
            unordered_set<int> set;
            number = sum(number);
            if(number ==1) return true;
            while (number>1)
            {   
                if(set.find(number) == set.end()){
                    set.insert(number);
                    number = sum(number);
                }
                else return false;
            }
            return true;
}
int main(){
        	

            int n = 2;
            cout<<isHappy(n)<<endl;
}