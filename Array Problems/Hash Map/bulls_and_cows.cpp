#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 299. Bulls and Cows
 string getHint(string secret, string guess) {
    unordered_map<int, int> map;
    int n = secret.length(), bulls = 0, cows = 0;
    for(int i = 0 ; i < n ; ++i){
        if(secret[i] == guess[i]){
            ++bulls;
            secret[i] = 'a';
            guess[i] = 'a';
        }
    }
    sort(secret.begin(), secret.end());
    sort(guess.begin(), guess.end());
    for(int i = 0 ; i< n-bulls; ++i){
        int temp= secret[i] -'0';
        map[temp]++;
        
    }
    for(int i = 0 ; i < n-bulls; ++i){
        int temp= guess[i] -'0';
        if(map.find(temp) != map.end()  && map[temp]>0){
            ++cows;
            map[temp]--;
        }
        
    }
    guess = "";
    guess += to_string(bulls) + "A" + to_string(cows) + "B";
    return guess;
    }
int main(){
    string secret = "1123", guess = "0111";
    cout<<getHint(secret, guess)<<endl;
}