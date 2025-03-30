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
ListNode* rotateRight(ListNode* head, int k) {
        stack<ListNode*> st;
  int size = 0;
  ListNode* temp = head;
  while (temp != nullptr)
  {
      st.push(temp);
      size++;
      temp = temp->next;
  }
  if(size == k || size <=1) return head;
  else if(size< k) k = k %size;

  while (k>0)
  {
      ListNode* tail = st.top();
      st.pop();
      st.top()->next = nullptr;
      tail->next = head;
      head = tail;
      k--;
  }
  return head;    
        
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
            head = rotateRight(head, 44);
            printLL(head);
}