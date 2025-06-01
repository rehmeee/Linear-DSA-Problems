#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 1669. Merge In Between Linked Lists
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
     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode* temp = nullptr;
        int i = 0 ; 
        while (i<a)
        {
            temp = cur1;
            cur1 = cur1->next;
            ++i;
        }
        i = 0;
        cur1 = list1;
        while (i<=b)
        {
            cur1 = cur1->next;
            ++i;
        }
        ListNode* temp3;
        while (cur2)
        {
            temp3 = cur2;
            cur2 = cur2->next;
        }
        temp3->next= cur1;
        temp->next = list2;
        return list1;
        
        
        
        
        
    }
int main(){
        	ListNode* one = new ListNode(10);
            ListNode* two = new ListNode(1);
            ListNode* three = new ListNode(13);
            ListNode* fourth = new ListNode(6);
            ListNode* fifth = new ListNode(5);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            ListNode* sone = new ListNode(100000);
            ListNode* stwo = new ListNode(2000001);
            ListNode* sthree = new ListNode(100002);
            ListNode* sfourth = new ListNode(1000003);
            ListNode* sfifth = new ListNode(1000004);
            ListNode* shead = sone;
             sone->next = stwo;
            stwo->next = sthree;
              sthree->next = sfourth;
            sfourth->next = sfifth;

            printLL(mergeInBetween(head, 2, 3, shead));
}