#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main()
 {         //  https://leetcode.com/problems/number-of-good-pairs/
    string s = "balloon";
    string text = "balloonballoon";
    if (text.length() < s.length())
        return 0;
    map<char, int> m;
    for (auto x : text)
    {
        m[x]++;
    }
    int instances = 0;
    for (int i = 0; i < text.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {

            if (m[s[j]] > instances && m.find(s[j]) != m.end())
            {

                continue;
            }
            cout << instances << endl;
            return instances;
        }
        instances++;
    }

    return instances;
}