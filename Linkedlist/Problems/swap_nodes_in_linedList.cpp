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
 ListNode* swapNodes(ListNode* head, int k) {
        int n = 0 ;
        ListNode* cur = head;
        ListNode* a = nullptr;
        ListNode* b = nullptr;
        while (cur)
        {
            ++n;
            b = a;
            a = cur;
            cur = cur->next;
        }
        if(k == 1){
            a->next = head->next;
            b->next = head;
            head->next = nullptr;
            return a;
        }
        int t = 1;
        cur = head;
        ListNode* prev = nullptr;
        while (t<k)
        {
            prev = cur;
            cur = cur->next;
            ++t;
        }
        ListNode* tempCur = head;
        ListNode* tempPrev = nullptr;
        t = 1;
        while (t<=(n-k))
        {
            tempPrev = tempCur;
            tempCur = tempCur->next;
            ++t;
        }
        a = tempCur->next;
        prev->next = tempCur;
        tempCur->next = cur->next;
        tempPrev->next = cur;
        cur->next = a;
        return head;

        
        
        
    }
    void printLL(ListNode* head){
        ListNode* temp = head;
        while (temp != nullptr)
        {
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    }
int main(){
        	ListNode* one = new ListNode(1);
            ListNode* two = new ListNode(2);
            ListNode* three = new ListNode(3);
            ListNode* fourth = new ListNode(4);
            ListNode* fifth = new ListNode(5);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            printLL(swapNodes(head, 2));
}