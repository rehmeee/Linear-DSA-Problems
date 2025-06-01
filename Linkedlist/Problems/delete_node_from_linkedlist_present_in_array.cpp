#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 3217. Delete Nodes From Linked List Present in Array
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
      ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> set;
        for(auto n : nums){
            set.insert(n);
        }
        ListNode* dumy = new ListNode(32);
        dumy->next = head;
         ListNode* cur = head;
         ListNode* prev= dumy;
         while (cur)
         {
            if(set.find(cur->val) != set.end()){
                prev->next = cur->next;
                cur = cur->next;
            }
            else {
                prev = cur;
                cur = cur->next;
            }
         }
         return dumy->next;
         
    }
int main(){
    vector<int> vec = {1,2,3};
        	ListNode* one = new ListNode(1);
            ListNode* two = new ListNode(2);
            ListNode* three = new ListNode(3);
            ListNode* fourth = new ListNode(4);
            ListNode* fifth = new ListNode(5);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            printLL(modifiedList(vec, head));
}