#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 237. Delete Node in a Linked List
    class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int val){
                this->val = val;
                next = NULL;
            }
    };
    void printLL(ListNode* node){
        while(node->next->next){
            node->val = node->next->val;
            node = node->next;
        }
        node->val = node->next->val;
        node->next = nullptr;
    }
    void deleteNode(ListNode* node) {

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
        deleteNode(three);
}