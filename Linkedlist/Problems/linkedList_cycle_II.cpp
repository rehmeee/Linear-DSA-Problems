#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> set;
        ListNode* temp = head;
        while (temp!= nullptr)
        {
            if(set.find(temp) != set.end()) return temp;
            set.insert(temp);
            temp = temp->next;
        }
        return nullptr;
        
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
    fourth->next = two;
    head = detectCycle(head);
    head->next = nullptr;
    printLL(head);
}