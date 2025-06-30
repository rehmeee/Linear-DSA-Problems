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
    ListNode* helper (ListNode* prev, ListNode* cur){
        if(!cur) return prev;
        ListNode* temp = cur->next;
        cur->next = prev;
        return helper(cur, temp);

    }
    ListNode* r3ev(ListNode* li){
        if(!li || !li->next) return li;
        return helper(nullptr, li);

    }
    ListNode* rev(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* newHead = rev(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}
int main(){
        	ListNode* one = new ListNode(1);
            ListNode* two = new ListNode(2);
            ListNode* three = new ListNode(3);
            ListNode* fourth = new ListNode(4);
            ListNode* fifth = new ListNode(5);
             one->next = two;
            two->next = three;
              three->next = fourth;
            // fourth->next = fifth;
            printLL(rev(one));
}