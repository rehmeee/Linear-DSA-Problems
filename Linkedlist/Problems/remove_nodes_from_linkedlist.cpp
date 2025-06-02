#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 2487. Remove Nodes From Linked List
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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* cur = head;
        while (cur)
        {
            while (!st.empty() && st.top()->val < cur->val)
            {
                st.pop();
            }
            st.push(cur);
            cur = cur->next;
            
            
        }
        ListNode* temp = nullptr;
        while (!st.empty())
        {
            st.top()->next = temp;
            temp = st.top();
            st.pop();

        }
        return temp;
        
        
    }
int main(){
        	ListNode* one = new ListNode(5);
            ListNode* two = new ListNode(2);
            ListNode* three = new ListNode(13);
            ListNode* fourth = new ListNode(3);
            ListNode* fifth = new ListNode(8);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
          printLL(  removeNodes(head));
}