#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // https://leetcode.com/problems/valid-palindrome/
    string str = "asdfdsa";
    int len = str.length();
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
              {
                 
                      return tolower(c);
             
              });
    cout << str;
    int i = 0, j = len - 1;
    while (i<=j)
    {
        if(!isalnum(str[i])){
            i++;
            continue;
        }
        else if(!isalnum(str[j])){
            j--;
            continue;
        }
        else if(str[i] != str[j]){
    cout<<"string is not palindrom";
            return false;
        }
        else{
            i++;
            j--;
            continue;
        }
    }
    cout << str;

   
}