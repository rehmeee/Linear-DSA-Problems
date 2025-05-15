#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 148. Sort List
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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        vector<int> vec;
        ListNode* cur = head;
        while (cur)
        {
            vec.push_back(cur->val);
            cur = cur->next;
        }
        sort(vec.begin(), vec.end());
        cur = head;
        int n = vec.size();
        for(int i = 0 ; i <n ; ++i ){
            cur->val = vec[i];
            cur = cur->next;
        }
        return head;
        
    }
int main(){
        ListNode* one = new ListNode(100);
        ListNode* two = new ListNode(20);
        ListNode* three = new ListNode(30);
        ListNode* fourth = new ListNode(150);
        ListNode* fifth = new ListNode(50);
        ListNode* head = one;
         one->next = two;
        two->next = three;
          three->next = fourth;
        fourth->next = fifth;	
        printLL(sortList(head));
}