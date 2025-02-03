#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main()
{
    vector<string> vec = {};
    vector<vector<string>> vec2;
    set<int> s;

    map<int, string> m;
    for (int i = 0; i < vec.size(); i++)
    {
        string s = vec[i];
        sort(s.begin(), s.end());
        m[i] = s;
    }
    for (auto x : m)
    {
        if (s.find(x.first) != s.end())
            continue;
        s.insert(x.first);
        vector<string> temp;
        temp.push_back(vec[x.first]);
        for (auto k : m)
        {
            if (x.first != k.first && s.find(k.first) == s.end())
            {
                if (x.second == k.second)
                {
                    s.insert(k.first);
                    temp.push_back(vec[k.first]);
                }
            }
        }
        vec2.push_back(temp);
    }

    for (auto x : vec2)
    {
        for (auto i : x)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}