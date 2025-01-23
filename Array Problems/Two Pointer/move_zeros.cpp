#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {0, 1, 2, 0, 3};
    int s = nums.size();
    if (s > 1)
    {
        for (int i = 0; i < s - 1; i++)
        {
            if (nums[i] == 0)
            {
                for (int j = i + 1; j < s; j++)
                {
                    if (nums[j] != 0)
                    {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
    }
    cout<<nums[3];
}