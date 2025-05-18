#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
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
         ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          stack<ListNode*> st1;
        stack<ListNode*> st2;
        ListNode* cur = l1;
        int first = 0, second = 0;
        while (cur)
        {
        st1.push(cur);
        cur = cur->next;
        ++first;
        }
        cur = l2;
        while (cur)
        {
            st2.push(cur);
            cur = cur->next;
            ++second;

        }
        if(first> second){
            int reminder = 0;
            ListNode* cur1 = st1.top();
            ListNode* cur2 = st2.top();
            while ( !st1.empty() && !st2.empty() &&  cur2 && cur1)
            {
                int temp = cur1->val + cur2->val + reminder;
                if(temp>9) {
                    temp = temp %10;
                    reminder = 1;
                }
                else {
                    reminder  = 0;
                }
                cur1->val = temp;
                st1.pop();
                st2.pop();
                cur1 = !st1.empty() ? st1.top(): nullptr;
                cur2 = !st2.empty() ? st2.top() : nullptr;

            }
            while (!st1.empty() && reminder>0)
            {
                int temp = cur1->val + reminder;
                if(temp>9){
                    temp = temp%10;
                    reminder = 1;
                    cur1->val = temp;
                    st1.pop();
                    cur1 = !st1.empty()? st1.top(): nullptr;
                }
                else {
                    cur1->val = temp;
                    reminder = 0;
                    break;
                }
            }
            if(reminder>0){
                ListNode* temp = new ListNode(reminder);
                temp->next = l1;
                return temp;
            }
            else return l1;
            


            
        }
        else if(first == second) {
             int reminder = 0;
            ListNode* cur1 = st1.top();
            ListNode* cur2 = st2.top();
            while ( !st1.empty() && !st2.empty() &&  cur2 && cur1)
            {
                int temp = cur1->val + cur2->val + reminder;
                if(temp>9) {
                    temp = temp %10;
                    reminder = 1;
                }
                else {
                    reminder  = 0;
                }
                cur1->val = temp;
                st1.pop();
                st2.pop();
                cur1 = !st1.empty() ? st1.top(): nullptr;
                cur2 = !st2.empty() ? st2.top() : nullptr;

            }
            if(reminder> 0){
                ListNode* temp = new ListNode(reminder);
                temp->next = l1;
                return temp;
            }
            else return l1;
        }
        else {
             int reminder = 0;
            ListNode* cur1 = st1.top();
            ListNode* cur2 = st2.top();
            while ( !st1.empty() && !st2.empty() &&  cur2 && cur1)
            {
                int temp = cur1->val + cur2->val + reminder;
                if(temp>9) {
                    temp = temp %10;
                    reminder = 1;
                }
                else {
                    reminder  = 0;
                }
                cur2->val = temp;
                st1.pop();
                st2.pop();
                cur1 = !st1.empty() ? st1.top(): nullptr;
                cur2 = !st2.empty() ? st2.top() : nullptr;

            }
             while (!st2.empty() && reminder > 0)
            {
                int temp = cur2->val + reminder;
                if(temp>9){
                    temp = temp%10;
                    reminder = 1;
                    cur2->val = temp;
                    st2.pop();
                    cur2 = !st2.empty()? st2.top(): nullptr;
                }
                else {
                    cur2->val = temp;
                    reminder = 0;
                    break;
                }
            }
              if(reminder> 0){
                ListNode* temp = new ListNode(reminder);
                temp->next = l2;
                return temp;
            }
            else  return l2;
        }
        return l2;

      
    }
        

int main(){
        	ListNode* one = new ListNode(0);
            // ListNode* two = new ListNode(4);
            // ListNode* three = new ListNode(3);
          
            ListNode* head = one;
            //  one->next = two;
            // two->next = three;
        ListNode* sone = new ListNode(7);
        ListNode* stwo = new ListNode(3);
        // ListNode* sthree = new ListNode(4);
        ListNode* shead = sone;
         sone->next = stwo;
        // stwo->next = sthree;
          printLL(addTwoNumbers(head, shead));
}