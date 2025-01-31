#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
        vector<int> arr = {2, 5, 3, 7}	;
        set<int> s;
        for(int x : arr){
            if(s.find(x) != s.end()){
                cout<<x<<endl;
                return 0;
            }
                s.insert(x);
        }
        cout<<"no duplicates"<<endl;
}