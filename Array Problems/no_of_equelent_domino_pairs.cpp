#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count = 0;
        for(int i = 0 ; i < dominoes.size(); i++){
            vector<int> temp = dominoes[i];
            int a = temp[0];
            int b = temp[1];
            for(int j = i+1; j<dominoes.size(); j++){
                    vector<int> temp2 = dominoes[j];
                    int c = temp2[0];
                    int d = temp2[1];
                    if(a == c && b == d || a == d && b == c ){
                        count++;
                    }

            }
            
        }
        return count;

}
int main(){
        	vector<vector<int>> vec = {{1,2},{2,1},{3,4},{5,6}};
            cout<<numEquivDominoPairs(vec)<<endl;
}