#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
// 342. Power of Four
bool isPowerOfFour(int n)
{
    if (n == 1)
        return true;
    if (n <= 0 || n % 4 != 0)
        return false;
    return isPowerOfFour(n / 4);
}
int main()
{
    cout<<isPowerOfFour(64)<<endl;
}