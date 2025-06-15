#include<iostream>
#include<stdio.h>
#include<numeric>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2807. Insert Greatest Common Divisors in Linked List

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        ListNode* cur = head;
        while (cur->next)
        {
            ListNode* tempNext = cur->next;
            ListNode* temp = new ListNode( gcd(cur->val, cur->next->val));
            cur->next = temp;
            temp->next = tempNext;
            cur = tempNext;
        }
        return head;
        

    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(2);
        ListNode* three = new ListNode(3);
        ListNode* fourth = new ListNode(4);
        ListNode* fifth = new ListNode(4);
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        printLL(insertGreatestCommonDivisors(one));
}