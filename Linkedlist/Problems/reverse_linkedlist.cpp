#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
    class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int val){
                this->val = val;
                next = NULL;
            }
    };
    void printLL(ListNode* head){
        ListNode* temp = head;
        while (temp != nullptr)
        {
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while (cur != nullptr)
        {
            ListNode* forward = cur->next;
            cur->next = prev;
            prev= cur;
            cur = forward;

        }
        return prev;
        


    }
int main(){
        ListNode* one = new ListNode(10);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(30);
        ListNode* fourth = new ListNode(40);
        ListNode* fifth = new ListNode(50);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        head = reverseList(head);
        printLL(head);
}