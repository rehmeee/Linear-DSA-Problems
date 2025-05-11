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
     ListNode* insertionSortList(ListNode* head) {
        stack<ListNode*> st;
        if(!head || !head->next) return head;
        st.push(head);
        ListNode* cur = head->next;
        while (cur)
        {
            if(cur->val < st.top()->val){
                ListNode* temp;
                ListNode* tempcur = cur->next;
                st.top()->next = tempcur;
                while(!st.empty() && st.top()->val> cur->val ){
                    temp = st.top();
                    st.pop();
                }
                cur->next = temp;
                if(!st.empty())st.top()->next = cur;
                while (cur != tempcur   )
                {
                    st.push(cur);
                    cur = cur->next;
                }
                


            }
            else {
                st.top()->next = cur;
                st.push(cur);
                cur = cur->next;
            }
        }
        st.top()->next = nullptr;
        while (!st.empty())
        {
            cur = st.top();
            st.pop();
        }
        return cur;
        
        
    }
int main(){
        ListNode* one = new ListNode(5);
        ListNode* two = new ListNode(2);
        ListNode* three = new ListNode(3);
        ListNode* fourth = new ListNode(3);
        ListNode* fifth = new ListNode(1);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;
        printLL(insertionSortList(head));
}