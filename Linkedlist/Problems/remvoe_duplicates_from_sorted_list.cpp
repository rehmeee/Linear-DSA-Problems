#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 83. Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev = head;
        ListNode* cur = head->next;
        while (cur != nullptr)
        {
            while(cur && prev->val == cur->val){
                cur = cur->next;
            }
            prev->next = cur;
            prev = prev->next;
            cur = cur? cur->next: cur;
        }
        return head;
        
    }
int main(){
        ListNode* one = new ListNode(10);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(20);
        ListNode* fourth = new ListNode(20);
        ListNode* fifth = new ListNode(50);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;
        head = deleteDuplicates(head);
        printLL(head);	
}