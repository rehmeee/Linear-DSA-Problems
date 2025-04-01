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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int reminder =0, sum;
        
        ListNode* head  = new ListNode(-1);
        ListNode* newListTemp = head;
        while (temp1 || temp2)
        {

            if( temp1 && temp2 ){
                sum = temp1->val + temp2->val +reminder;
                if(sum>9) {sum = sum%10; reminder =1;}
                else reminder =0;
                newListTemp->next = new ListNode(sum);
                newListTemp = newListTemp->next;
                temp1= temp1->next;
                temp2 = temp2->next;
                continue;
            }
            else if (temp1){
                sum = temp1->val + reminder;
                if(sum>9) {sum = sum%10; reminder =1;}
                else reminder =0;
                newListTemp->next = new ListNode(sum);
                newListTemp = newListTemp->next;
                temp1 = temp1->next;
            }
            else {
                sum = temp2->val+reminder;
                if(sum>9) {sum = sum%10; reminder =1;}
                else reminder =0;
                newListTemp->next = new ListNode(sum);
                newListTemp = newListTemp->next;
                temp2 = temp2->next;
            }
        }
        if(reminder>0) newListTemp->next = new ListNode(reminder);
        return head->next;
        
        

    }
int main(){
        	ListNode* one = new ListNode(2);
            ListNode* two = new ListNode(4);
            ListNode* three = new ListNode(3);
            // ListNode* fourth = new ListNode(9);
            // ListNode* fifth = new ListNode(9);
            ListNode* head = one;
             one->next = two;
            two->next = three;
            //   three->next = fourth;
            // fourth->next = fifth;
            ListNode* sone = new ListNode(5);
            ListNode* stwo = new ListNode(6);
            ListNode* sthree = new ListNode(4);
            // ListNode* sfourth = new ListNode(9);
            // ListNode* sfifth = new ListNode(9);
            ListNode* shead = sone;
             sone->next = stwo;
            stwo->next = sthree;
            //   sthree->next = sfourth;
            // sfourth->next = sfifth;
            head = addTwoNumbers(head, shead);
            printLL(head);
}