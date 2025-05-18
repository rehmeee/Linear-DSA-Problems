#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
// 1019. Next Greater Node In Linked List
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
    } vector<int> nextLargerNodes(ListNode* head) {
        vector<int> val;
        if(!head->next) return {0};
        ListNode* cur = head;
        while (cur)
        {
            val.push_back(cur->val);
            cur = cur->next;
        }
        stack<int> st;
        int n = val.size();
        vector<int> vec(n, 0);
        for(int i = 0 ; i< n ; ++i){
            while (!st.empty() && val[i]> val[st.top()])
            {
                vec[st.top()] = val[i];
                st.pop();
            }
            st.push(i);
            
        }
        return vec;
    }
int main(){
        ListNode* one = new ListNode(2);
        ListNode* two = new ListNode(7);
        ListNode* three = new ListNode(4);
        ListNode* fourth = new ListNode(3);
        ListNode* fifth = new ListNode(5);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        vector<int> vec = nextLargerNodes(head);
        for(auto x: vec){
            cout<<x<<endl;
        }
}