#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int r = n, c = n;
        vector<vector<int>> vec(r, vector<int>(c, 0));
        cout<<vec.size()<<endl;
        for(auto x: buildings){
            int l = x[0];
            int r = x[1];
            vec[--l][--r] = 1;
        }
        int count = 0;
        for(int i = 1; i<vec.size()-1; i++){
            for(int j = 1 ; j<n-1; j++){
                if(vec[i][j] == 0) continue;
                bool top = false, botom = false, left = false, right = false;
                int row = i, col = j;
                
                while (!top && row> 0)
                {   
                    if(vec[--row][col] != 0) {
                        top = true; 
                        break;
                    } 
                }
                row = i;
                if(!top) continue;
                while (!botom && row< n-1)
                {   
                    if(vec[++row][col] != 0) {
                        botom = true; 
                        break;
                    } 
                }
                if(!botom) continue;
                row = i;
                
                while (!left && col>0)
                {
                    if(vec[row][--col] != 0) {
                        left = true;
                        break;
                    }
                }
                if(!left) continue;
                col = j; 
                while (!right && col>0)
                {
                    if(vec[row][++col] != 0) {
                        right = true;
                        break;
                    }
                }
                if(!right) continue;

                count++;


                
            }

        }
        return count;

}
int main(){
        vector<vector<int>> vec = {{1,3}, {4,3},{4,2},{1,4},{2,3},{2,2},{3,2},{4,1}};	
        cout<<countCoveredBuildings(4, vec)<<endl;
}