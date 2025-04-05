#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 25. Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        
        ListNode* temp = new ListNode(1);
        temp->next = head;
        ListNode* prevTemp = temp;
        ListNode* cur = head;
        while (cur!= nullptr)
        {
            int i = 1;
            ListNode* tempcur = cur;
            stack<ListNode*> st;
            while (i<=k && cur)
            {
                st.push(cur);
                i++;
                cur = cur->next;
            }
            if(i<=k) {
                prevTemp->next = tempcur;
                return temp->next;
            }
            prevTemp->next = st.top();
            while (!st.empty())
            {
                ListNode* a = st.top();
                st.pop();
                if(st.empty()){
                    prevTemp = a;
                    prevTemp->next = nullptr;
                    break;
                }
                else a->next = st.top();
                
            }

            

            
        }
        return temp->next;
        

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
            head = reverseKGroup(head, 3);
            printLL(head);
}