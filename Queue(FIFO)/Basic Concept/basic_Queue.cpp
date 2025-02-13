#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
int main(){
        	queue<int> q;
            q.push(23);
            q.push(2);
            q.push(58);
            q.push(1);
            cout<< q.front()<<endl;
            cout<<q.back()<<endl;
}