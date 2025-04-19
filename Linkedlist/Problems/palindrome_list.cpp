#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
//palindrome list
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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> st;
        while (temp )
        {
            st.push(temp);
            temp = temp->next;
        }
        temp = head;
        while (!st.empty())
        {
            if(temp->val != st.top()->val) return false;
            st.pop();
            temp = temp->next;
        }
        return true;
        
        
        
    }
int main(){
        	ListNode* one = new ListNode(0);
            ListNode* two = new ListNode(20);
            ListNode* three = new ListNode(30);
            ListNode* fourth = new ListNode(20);
            ListNode* fifth = new ListNode(10);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            cout<<isPalindrome(head)<<endl;
}