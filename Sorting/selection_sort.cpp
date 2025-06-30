#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> vec = {0,9, 0,7,3,4,9,1,0};
    int s = vec.size();
    for (int i = 0 ;i<s-1; ++i)
    {
        int minIndex = i;
        for(int j = i ;j<s; ++j){
            if(vec[j]<vec[minIndex]){
                minIndex= j;
            }
        }
        swap(vec[i], vec[minIndex]);
    }
    // for reverse
    // vector<int> vec = {0,9, 0,7,3,4,9,1,0};
    // int s = vec.size();
    // for (int i = s-1; i >0; --i)
    // {
    //     int j = i, temp = vec[i], tempi = i;

    //     while (j >=0)
    //     {
    //         if (vec[j] < temp)
    //         {
    //             temp = vec[j];
    //             tempi = j;
    //         }
    //         --j;
    //     }
    //     swap(vec[i], vec[tempi]);
    // }
    for (auto x : vec)
    {
        cout << x << endl;
    }
}