#include <bits/stdc++.h>
using namespace std;
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
          n = (n - 1) % 14 + 1;
        vector<int> last(8 , 0);
        for(int k = 0; k < n; ++k){
            for (int i = 1; i < 7; ++i) last[i] = (cells[i - 1] == cells[i + 1]) ? 1 : 0;
            cells = last;
        }
        return cells;
    }	
int main(){
        vector<int> vec = {0,1,0,1,1,0,0,1};	
        vec = prisonAfterNDays(vec, 7);
        for(auto x: vec){
        cout<<x<<endl;
        }
}