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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(0);
        ListNode* newtemp = temp;
        ListNode* tempList1 = list1;
        ListNode* tempList2 = list2;
        while (tempList1 != nullptr ||  tempList2 != nullptr)
        {
            if(tempList1 && tempList2 && tempList1->val <= tempList2->val){
                temp->next = tempList1;
                temp = temp->next;
                tempList1 = tempList1->next;
            }
            else if(tempList2){
                temp->next = tempList2;
                temp = temp->next;
                tempList2 = tempList2->next;
            }
            else if(tempList1){
                temp->next = tempList1;
                temp = temp->next;
                tempList1 = tempList1->next;
            }
        }
        return newtemp->next;
        
    }
int main(){
        ListNode* one = new ListNode(10);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(30);
        ListNode* sone = new ListNode(10);
        ListNode* stwo = new ListNode(20);
        // ListNode* sthree = new ListNode(30);
        // ListNode* fourth = new ListNode(40);
        // ListNode* fifth = new ListNode(50);
        ListNode* head = one;
        ListNode* shead = sone;
         one->next = two;
        two->next = three;
        //   three->next = fourth;
        // fourth->next = fifth;
        sone->next  = stwo;
        // stwo->next = sthree;
        head = mergeTwoLists(head, shead);
        printLL(head);


}