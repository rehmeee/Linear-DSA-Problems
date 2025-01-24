#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    char arr[] = {'h','8'};
    int len = sizeof(arr);
    int i = 0, j = len-1;
    while (i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout<<arr;
}