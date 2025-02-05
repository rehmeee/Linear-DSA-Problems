#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
vector<int> sw(vector<int> nums, int i, int j)
{
    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
    return nums;
}
int main()
{
    vector<int> nums = {-1};

    int k = 2;
    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}