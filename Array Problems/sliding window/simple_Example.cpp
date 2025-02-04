#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> vec = {2, 3, 53, 5, 3, 2, 6, 3};
    int k = 3;
    int sum = 0, l = 0, r = 0, maxsum = 0, s = vec.size();

    while (r < k)
    {
        sum += vec[r];
        r++;
    }
    maxsum = sum;

    while (r < s)
    {
        sum += vec[r];
        sum -= vec[l];
        r++;
        l++;
        maxsum = max(maxsum, sum);
    }
    cout << maxsum << endl;
}