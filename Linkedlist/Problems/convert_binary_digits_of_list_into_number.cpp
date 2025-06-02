#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1290. Convert Binary Number in a Linked List to Integer

    class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int val){
                this->val = val;
                next = NULL;
            }
    };
    int getDecimalValue(ListNode* head) {
        
        string s = "";
        while (head)
        {
            s +=to_string(head->val);
            head = head->next;
        }
        
        return  stoi(s, nullptr, 2);
        
    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(0);
        ListNode* three = new ListNode(0);
        ListNode* fourth = new ListNode(1);
        ListNode* fifth = new ListNode(0);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        cout<<getDecimalValue(head)<<endl;
}