#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 143. Reorder List
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
void reorderList(ListNode* head) {
        stack<ListNode*> st;
        if(!head->next) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        while (slow){
        st.push(slow);
            slow = slow->next;
        }
        ListNode* cur = head;
        while (!st.empty())
        {
            if(st.top() == cur) break;;
            ListNode* temp = cur->next;
            ListNode* temp2 = st.top();
            st.pop();
            cur->next  = temp2;
            temp2->next = temp;

            cur = temp;

        }
        cur->next = nullptr;
        printLL(head);
        
        
}
int main(){
        ListNode* one = new ListNode(10);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(30);
        ListNode* fourth = new ListNode(40);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        reorderList(head);
}