#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
// 238. Product of Array Except Self
// https://leetcode.com/problems/product-of-array-except-self/description/

// this is brute force approach
// vector<int> product(vector<int> vec)
// {
//     for (int i = 0; i < vec.size(); i++)
//     {
//         int temp = 1;
//         for (int j = 0; j < vec.size(); j++)

//         {
//             if (i == j)continue;
                
//             temp *= vec[j];
//         }
//         cout << temp << endl;
//     }
// }

// optimal approach

vector<int> product2(vector<int> vec)
{
    int n = vec.size();
    vector<int> prefix(n, 1);
    vector<int> sufix(n, 1);
    vector<int> ans(n,1);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * vec[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sufix[i] = vec[i + 1] * sufix[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * sufix[i];
    }
    return ans;
}

vector<int> optimal(vector<int> vec){
    int n = vec.size();
    vector<int> ans(n,1);
    for(int i = 1 ; i < n ; i++){
        ans[i] = ans[i-1] * vec[i-1];
    }
    int suffix = 1;
    for(int i = n-2; i>=0; i--){
        suffix *= vec[i+1];
        ans[i] *= suffix;
    }
    return ans;
    
}
int main()
{
    vector<int> vec = {1,2,3,4};
    vector<int> vec2 = optimal(vec);
    cout<<"this is in vector 2 "<<endl;
    for (int x : vec2)
    {
        cout << x << endl;
    }
}