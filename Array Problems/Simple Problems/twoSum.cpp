#include<iostream>
#include<stdio.h>
using namespace std;    
int main(){
    int arr[5] = {2,7,11,15,3};
    int target = 77;
    int len = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i = 0;i<len; i++){
        for(j = i+1; j<len; j++){
            if(target == (arr[i]+ arr[j])){
                cout<<true;
                break;
            }

        }

    }

}
