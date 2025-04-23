#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 165. Compare Version Numbers
int compareVersion(string version1, string version2) {
    int lenth1 = version1.length(), lenth2 = version2.length();
    bool flag1 = true, flag2 = true;
    int start1 = 0, start2 = 0;
    while (flag1 || flag2)
    { int a = start1, b = start2;
    if(start1<lenth1){
       while(version1[start1] == 0){
           start1++;
       }
        if(version1[start1] == '.') start1 = a;
       }
      
       if(start2<lenth2){

       
       while(version2[start2] == 0){
           start2++;
       }
       if(version2[start2] == '.') start2 = b;
       }
       
       string temp1= "", temp2 = "";
       while(start1<lenth1 && version1[start1] != '.'){
           temp1.push_back(version1[start1++]);
       }
       while(start2<lenth2 && version2[start2] != '.'){
           temp2.push_back(version2[start2++]);
       }
       int num = temp1.length()? stoi(temp1): 0, num2 = temp2.length()? stoi(temp2): 0;
       if(num<num2) return -1;
       if(num> num2) return 1;
       start1++;
       start2++;
       if(start1>= lenth1) flag1 = false;
       if(start2>= lenth2) flag2 = false; 

    }
    return 0;
     
}
int main(){
        string version1 = "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.00.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000", version2 = "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000";	
        cout<<compareVersion(version1, version2)<<endl;
}