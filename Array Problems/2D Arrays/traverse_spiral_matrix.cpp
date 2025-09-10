#include <bits/stdc++.h>
using namespace std;
    vector<int> traverse(vector<vector<int>> vec){
        int top = 0 , left = 0, right = vec[0].size(), bottom = vec.size();
        vector<int> res;
        while (top<=bottom)
        {
            int ttop = top, templ = left, tempr = right-1, tempb= bottom;
            while (templ<=tempr)
            {
                res.push_back(vec[top][templ++]);
            }
            ttop++;
            while (ttop<tempb)
            {
                res.push_back(vec[ttop++][tempr]);
            }
            tempb--;
            tempr--;
            while (tempr>=left)
            {
                res.push_back(vec[tempb][tempr--]);
            }
            tempb--;
            while(tempb>top){
                res.push_back(vec[tempb--][left]);
            }
            ++top;
            ++left;
            --right;
            --bottom;
            
            
            
        }
        return res;
        
    }	
int main(){
        vector<int> vec = traverse({
            {1,2,3},
            {4,5,6}, 
            {7,8,9}});
        for(auto x: vec){
        cout<<x<<endl;
        }	
}