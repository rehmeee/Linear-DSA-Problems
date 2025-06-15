#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
// 2130. Maximum Twin Sum of a Linked List
    class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int val){
                this->val = val;
                next = NULL;
            }
    };
    int pairSum(ListNode* head) {
        int n = 0;
        unordered_map<int, ListNode*> map;
        ListNode* cur = head;
        while (cur)
        {
            map[n++] = cur;
            cur = cur->next;
        }
        int i = 0, limit = n/2, maxSum = INT_MIN;
        while (i<=limit)
        {
            maxSum = max(maxSum, (map[i++]->val + map[n-i]->val));
        }
        return maxSum;
        

        

    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(2);
        ListNode* three = new ListNode(3);
        ListNode* fourth = new ListNode(4);
        ListNode* fifth = new ListNode(8);
        ListNode* temp = new ListNode(6);
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        fifth->next = temp;
        cout<<pairSum(one)<<endl;

}