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
        if(!list1 & !list2) return nullptr;
        if(!list1) return list2;
        if(!list2) return list1;
        int l1 = list1->val, l2 = list2->val;
        if(list1->val<list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }

    }
int main(){
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(2);
        ListNode* three = new ListNode(6);
        ListNode* fourth = new ListNode(40);
        ListNode* fifth = new ListNode(50);
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;
        ListNode* sone = new ListNode(1);
        ListNode* stwo = new ListNode(2);
        ListNode* sthree = new ListNode(3);
        ListNode* sfourth = new ListNode(4);
        ListNode* sfifth = new ListNode(5);
        ListNode* shead = sone;
         sone->next = stwo;
        stwo->next = sthree;
          sthree->next = sfourth;
        sfourth->next = sfifth;	
        printLL(mergeTwoLists(one, sone));
}