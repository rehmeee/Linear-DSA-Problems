#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 2816. Double a Number Represented as a Linked List
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
     ListNode* doubleIt(ListNode* head) {
        stack<ListNode*> st;
        ListNode* cur = head;
        while (cur)
        {
            st.push(cur);
            cur = cur->next;
        }
        int reminder = 0;
        while (!st.empty())
        {
            int temp = (st.top()->val*2) +reminder;
            if(temp>9){
                st.top()->val = temp%10;
                reminder = 1;
                st.pop();
            }
            else {
                st.top()->val = temp;
                reminder = 0 ;
                st.pop();
            }
        }
        ListNode* dumy = new ListNode(reminder);
        if(reminder>0){
            dumy->next = head;
            return dumy;

        }
        return head;

        
        
    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(2) ;
        ListNode* three = new ListNode(9);
        ListNode* fourth = new ListNode(0);
        ListNode* fifth = new ListNode(3);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        printLL(doubleIt(head));
}