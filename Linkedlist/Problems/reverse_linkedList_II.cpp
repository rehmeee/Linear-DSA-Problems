#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left == right) return head;
        ListNode* temp2 = new ListNode(0);
        ListNode* temp;
        temp2->next = head;
        ListNode* prevTemp =temp2;
        ListNode* prev = head;
        ListNode* cur = head->next;
        int l = 1;
        while (l<=left)
        {
            if(l == left){
                temp = prev;
                while (l < right)
                {
                    ListNode* nextNode = cur->next;
                    cur->next = prev;
                    prev = cur;
                    cur = nextNode;
                    l++;
                }
                break;
                
            }
            else {
                prevTemp = prev;
                prev = cur;
                cur = cur->next;
                l++;
            }

        }
        prevTemp->next = prev;
        temp->next = cur;
        return temp2->next;

        
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
            head = reverseBetween(head, 2,2);
            printLL(head);
}