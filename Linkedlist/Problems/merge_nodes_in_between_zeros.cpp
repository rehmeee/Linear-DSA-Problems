#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2181. Merge Nodes in Between Zeros
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
ListNode* mergeNodes(ListNode* head) {
        ListNode* cur = head->next;
        int temp = 0;
        ListNode* dumy = new ListNode(9);
        ListNode* tempNode = dumy;
        while (cur)
        {
            if(cur->val > 0){
                temp += cur->val;
                cur = cur->next;
            }
            else{
                cur->val = temp;
                temp = 0;
                tempNode->next = cur;
                tempNode = tempNode->next;
                cur = cur->next;
                tempNode->next = nullptr;
            }
        }
        return dumy->next;
        
    }
int main(){
        ListNode* one = new ListNode(0);
        ListNode* two = new ListNode(3);
        ListNode* three = new ListNode(1);
        ListNode* fourth = new ListNode(0);
        ListNode* fifth = new ListNode(4);
        ListNode* six = new ListNode(0);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        fifth->next = six;
        printLL(mergeNodes(head));
}