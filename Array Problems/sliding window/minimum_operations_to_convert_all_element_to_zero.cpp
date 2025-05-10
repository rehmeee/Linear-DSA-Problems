#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int minOperations(vector<int> &nums)
{
    int n = nums.size(), left = 0, right = 0, count = 0;

    while (left < n)
    {left = 0;
        while (left < n && nums[left] == 0)
        {
            left++;
        }
        if (left == n)
            return count;
        right = left;
        while (right < n && nums[right] != 0 && left <= right)
        {
            if (nums[right] < nums[left])
                left = right;
            else
                right++;
        }
        int temp = nums[left];
        for (int i = left; i < right; ++i)
        {
            if (nums[i] == temp)
                nums[i] = 0;
        }
        count++;
    }
    return count;
}
int main()
{
    vector<int> vec = {0,2};
    cout << minOperations(vec) << endl;
}