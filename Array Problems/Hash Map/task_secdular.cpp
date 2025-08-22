#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
        int leastInterval(vector<char>& tasks, int n) {
            map<char,int> map1;
            map<char, int> temp;
        for(auto x: tasks){
            map1[x]++;
        }
        int total = 0;
        for(auto x: map1){
            temp[x.first]= 0;
        }
        while (map1.size()>0)
        {
            bool flag = true;
            for(auto &x: temp){
                if(map1.find(x.first) == map1.end()){
                    continue;
                }
                else if(flag && x.second ==0){
                        int k = map1[x.first];
                        k ==1 ? map1.erase(x.first): map1[x.first]--;
                        flag = false;
                        x.second = n;
                        total++;
                }else {
                    x.second>0 ? x.second--: x.second;
                }
            }
            if(flag){
                total++;
            }
        }
        return total;
        
    }	
    int main(){
            vector<char> vec = {'A','A','A','B','B','B', 'C','C','C', 'D', 'D', 'E'};

           
            cout<<leastInterval(vec, 2)<<endl;
}