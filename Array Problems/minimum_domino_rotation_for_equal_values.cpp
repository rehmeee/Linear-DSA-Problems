#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 1007. Minimum Domino Rotations For Equal Row

int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int topMax = 0, botMax = 0, n = tops.size();
            unordered_map<int, int> top;
            unordered_map<int, int> botom;
            for(int i = 0 ; i< n; i++){
                    top[tops[i]]++;
                    botom[bottoms[i]]++;
            }
            int temp = 0;
            for(auto x : top){
                if(x.second>temp){
                    temp = x.second;
                    topMax = x.first;
                }
            }
            temp = 0;
            for(auto x : botom){
                if(x.second>temp){
                    temp = x.second;
                    botMax = x.first;
                }
            }
            bool topFlag = true, botFlag = true;
            temp = 0;
            for (size_t i = 0; i < n; i++)
            {   
                if(topMax == tops[i]) continue;
                else if(topMax == bottoms[i]){
                    temp++;
                }
                else {
                    topFlag = false;
                    break;
                }
            }
            int botTemp = 0;
            for (size_t i = 0; i < n; i++)
            {   
                if(botMax == bottoms[i]) continue;
                else if(botMax == tops[i]){
                    botTemp++;
                }
                else {
                    botFlag = false;
                    break;
                }
            }
            if(topFlag && botFlag) return min(temp, botTemp);
            else if(topFlag) return temp;
            else if(botFlag) return botTemp;
            else return -1;

            


}
int main(){
        	vector<int> tops = {3,5,1,2,3}, bottoms = {3,6,3,3,4};
            cout<<minDominoRotations(tops, bottoms)<<endl;
}