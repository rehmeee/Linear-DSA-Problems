#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void merge(vector<int> &vec, int s, int m, int e)
{
    vector<int> ans;
    int i = s, j = m;
    while (i < m && j < e)
    {
        if (vec[i] < vec[j])
        {
            ans.push_back(vec[i++]);
        }
        else
            ans.push_back(vec[j++]);
    }
    while (i < m)
    {
        ans.push_back(vec[i++]);
    }
    while (j < e)
    {
        ans.push_back(vec[j++]);
    }
    for (int k = 0; k < ans.size(); ++k)
    {
        vec[s + k] = ans[k];
    }
    return;
}
void sort(vector<int> &vec, int start, int end)
{
    if (start >= end -1)
       { return;}
    int m = (end + start) / 2;
    sort(vec, start, m);
    sort(vec, m, end);
    merge(vec, start, m, end);
}

int main()
{
    vector<int> vec = {1, 5};
    sort(vec, 0, vec.size());
    for (auto x : vec)
    {
        cout << x << endl;
    }
}