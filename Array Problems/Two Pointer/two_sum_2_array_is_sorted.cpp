#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    int len = numbers.size();
    int l = 0, r = len - 1;
    while (l < r)
    {
        if ((numbers[l] + numbers[r]) == target)
        {
            return {l + 1, r + 1};
        }
        else if (numbers[l] + numbers[r] > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    return {-1, -1};
}