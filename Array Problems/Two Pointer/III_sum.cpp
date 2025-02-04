#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
    // https://leetcode.com/problems/3sum/description/
    vector<int> nums = {0, 0, 0};
    vector<vector<int>> vec;
    sort(nums.begin(), nums.end());
    set<vector<int>> se;
    int i = 0;
    int s = nums.size();
    while (nums[i] <= 0)
    {
        int j = i + 1, k = s - 1;
        while (j < k)
        {
            vector<int> temp = {nums[i], nums[j], nums[k]};
            sort(temp.begin(), temp.end());
            if (se.find(temp) != se.end())
            {
                j++;
                continue;
            }
            else if (nums[i] + nums[j] + nums[k] == 0)
            {

                se.insert(temp);
                j++;
            }
            else if (nums[i] + nums[j] + nums[k] > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    for (auto x : se)
    {
        for (auto y : x)
        {
            cout << y << "\t";
        }
        cout << "" << endl;
    }
}