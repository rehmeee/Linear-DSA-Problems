#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1171. Remove Zero Sum Consecutive Nodes from Linked List
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* cur = dummy;
        while (cur)
        {
            ListNode* tempcur = cur->next;
            int sum = 0;
            while (tempcur)
            {
                sum += tempcur->val;
                if(sum == 0){
                    cur->next = tempcur->next;
                    break;
                }else {
                    tempcur = tempcur->next;
                }
            }
            
                if(tempcur == nullptr){
                    prev = cur; 
                    cur= cur->next;
                }
            

            
            
            
        }
        return dummy->next;
        
    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(3);
        ListNode* three = new ListNode(3);
        ListNode* fourth = new ListNode(-3);
        ListNode* fifth = new ListNode(-3);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        printLL(removeZeroSumSublists(head));
}