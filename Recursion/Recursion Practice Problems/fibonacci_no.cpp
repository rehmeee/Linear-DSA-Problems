#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int fibNo(int n ){
    if(n==0)
        return 0;
    else if(n ==1)
        return 1;
    else 
        return fibNo(n-1) + fibNo(n-2); 

}
int main(){
        	cout<<fibNo(4)<<endl;
}