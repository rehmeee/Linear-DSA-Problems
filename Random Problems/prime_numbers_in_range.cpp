#include <bits/stdc++.h>
using namespace std;
    bool isPrime(int n ){
        int temp = sqrt(n);
        for(int i = 3 ; i <= temp; i+=2 ){
            if(n%i==0) {return false;}
        }
        return true;
    }
    vector<int> findPrime(int start, int end){
        vector<int> vec;
        for(int  i = start; i <= end; ++i){
            if(i %2 == 0) continue;
            else if(isPrime(i)){
                vec.push_back(i);
            }
        }
        return vec;
    }	
int main(){
        vector<int> vec = findPrime(10, 30);
        for(auto x: vec){
        cout<<x<<endl;
        }	
}