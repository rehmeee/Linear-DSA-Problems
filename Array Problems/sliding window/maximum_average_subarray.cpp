#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
        vector<int> vec = {1,12,-5,-6,50,3};	
        int k  = 4, i = 0 , j=0;
        double maxSum, sum = 0;
        int n = vec.size();
        while (j<k)
        {
            sum+= vec[j];
            j++;
        }
        maxSum = sum/k;
        while (j<n)
        {
            sum += vec[j];
            sum -= vec[i];
            double temp = sum/k;
            cout<<temp<<endl;
            maxSum = max(maxSum, temp);
            j++;
            i++;
        }
        cout<<maxSum<<endl;
        
}