#include <bits/stdc++.h>
using namespace std;
        	int findRadius(vector<int>& houses, vector<int>& heaters) {
                int l = houses.size();
                unordered_set<int> set;
                int temp  = 0, count = 0, len = heaters.size();
                while (set.size()<l)
                {
                      ++count;
                    if(temp== len){
                        temp = 0;
                    
                    set.insert(houses[heaters[temp]-1]);
                    int left = 0, right = 0;
                    if(temp-count>=0){
                        set.insert(houses[heaters[temp]-1 - count]);
                    }
                    if(temp+count<l){
                         set.insert(houses[heaters[temp]-1 + count]);
                    }
                    ++temp;
                  
                }
                
                
    }
}
int main(){
            vector<int> vec = {1,2,3};
            vector<int> vec2 = {2};
            cout<<findRadius(vec,vec2)<<endl;
}