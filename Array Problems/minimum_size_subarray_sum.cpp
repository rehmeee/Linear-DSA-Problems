#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int minSubArrayLen(int target, vector<int>& arr) {
    int i = 0; // Left boundary of the sliding window
    int sum = 0; // Current sum of elements in the window
    int length = INT_MAX; // Stores the minimum length found

    for (int j = 0; j < arr.size(); j++) { // Expand the window
        sum += arr[j];

        while (sum >= target) { // Shrink the window if possible
            length = min(length, j - i + 1); // Update minimum length
            sum -= arr[i]; // Remove arr[i] from sum
            i++; // Move left boundary forward
        }
    }

    return length == INT_MAX ? 0 : length; // If no valid subarray, return 0
}
int main(){
    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(target,nums )<<endl;

}