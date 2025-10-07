#include <bits/stdc++.h>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int  i = 1,len = matrix.size();
      while (i<len)
      {
        if(target == matrix[i][0]) return true;
        else if(target< matrix[i][0]){
            break;
        }
        ++i;
      }
      --i;
      vector<int> vec = matrix[i];
      int l = 0, r = vec.size();
      while(l<=r){
        int m = (l+r)/2;
        if(m == vec.size()) break;
        if(target == vec[m]) return true;
        else if(target>vec[m]){
            l = m+1;
        }else {
            r = m-1;
        }
      }
      return false;
      
    }    
int main(){
        	vector<vector<int>> vec = {{1}};
            cout<<searchMatrix(vec, 2)<<endl;
}