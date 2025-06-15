#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 2074. Reverse Nodes in Even Length Groups
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
      ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(!head || !head->next) return head;
        int count = 2;
        ListNode* cur = head->next;
        ListNode* prev = head;
        while (cur)
        {
            int temp = count;
            ListNode* tempcur = cur;
            stack<ListNode*> st;
            while (cur && temp>0)
            {
                st.push(cur);
                cur = cur->next;
                --temp;
                
            }
            if(st.size() % 2 != 0) {
                ++count;
                prev = st.top();
                continue;
            }
            prev->next = st.top();
            ListNode* t = st.top();
            while (!st.empty())
            {
                st.pop();
                if(st.empty()) t->next = cur;
                else{ t->next = st.top();
                t = st.top();}
               

            }
            prev = t;
            ++count;
            
            
        }
        return head;
        
    }
int main(){
        	   ListNode* one = new ListNode(1);
               ListNode* two = new ListNode(2);
               ListNode* three = new ListNode(3);
               ListNode* fourth = new ListNode(4);
               ListNode* fifth = new ListNode(5);
            //    ListNode* temp = new ListNode(6);
                one->next = two;
               two->next = three;
                 three->next = fourth;
               fourth->next = fifth;
            //    fifth->next = temp;
               printLL(reverseEvenLengthGroups(one));
}