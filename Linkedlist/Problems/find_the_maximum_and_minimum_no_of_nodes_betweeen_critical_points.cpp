#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
 vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> vec ;
        vector<int> tempVec;
        ListNode* cur = head->next;
        if(!cur->next) return {-1,-1};
        ListNode* prev = head;
        int i = 2;
        while (cur->next)
        {
            if(cur->val>prev->val && cur->val> cur->next->val){
                tempVec.push_back(i);
            }
            else if(cur->val<prev->val && cur->val< cur->next->val){
                tempVec.push_back(i);
            }
            ++i;
            prev = cur;
            cur = cur->next;
        }

        int n = tempVec.size();
        if(n<2) return {-1,-1};
        int minDis= INT_MAX ;
        for(int i = n-2; i>=0;--i){
            minDis = min(minDis,(tempVec[i+1]-tempVec[i]) );
        }
        int maximum = tempVec[n-1] - tempVec[0];
        return {minDis, maximum};
        
        

    }
int main(){
        	ListNode* one = new ListNode(3);
            ListNode* two = new ListNode(5);
            ListNode* three = new ListNode(1);
            ListNode* fourth = new ListNode(2);
            ListNode* fifth = new ListNode(1);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            vector<int> vec = nodesBetweenCriticalPoints(head);
            for(auto x: vec){
                cout<<x<<endl;
            }
}