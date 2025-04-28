#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 328. Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* odd = head;
        ListNode* even =  head->next;
        ListNode* temp = even;
        
        ListNode* cur = head->next->next;
        int i = 1;
        while (cur)
        {
            if(i%2 != 0) {
                odd->next = cur;
                odd = cur;
                cur = cur->next;
                i++;
            }
            else {
                even ->next = cur;
                even = cur;
                cur= cur->next;
                i++;
            }
        }
        odd->next = temp;
        even-> next = nullptr;
        return head;
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
        printLL(oddEvenList(head));
}