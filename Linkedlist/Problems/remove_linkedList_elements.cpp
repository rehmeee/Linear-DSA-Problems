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
    ListNode* removeElements(ListNode* head, int val) {
            if(!head) return nullptr;
            ListNode* dummy = new ListNode(1);
            dummy->next = head;
            ListNode* prev = dummy;
            ListNode* cur = head;
            while (cur)
            {
                if(cur->val == val){
                    prev->next = cur->next;
                    cur = cur->next;
                }
                else{
                    prev = cur;
                    cur = cur->next;
                }
            }
            return dummy->next;
            
    }
int main(){
        ListNode* one = new ListNode(50);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(50);
        ListNode* fourth = new ListNode(40);
        ListNode* fifth = new ListNode(50);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        printLL(removeElements(head, 50));
}