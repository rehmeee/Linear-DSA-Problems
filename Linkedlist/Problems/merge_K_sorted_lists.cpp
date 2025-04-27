#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 23. Merge k Sorted Lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
            if(lists.size() <1) return nullptr;

            ListNode* cur = lists[0];
            int a = 0;
            if(!cur){
                for(int i = 1 ; i <lists.size(); i++){
                    if(lists[i]) {
                        cur = lists[i];
                        a = i;
                        break;
                    }
                }
            }
            if(!cur) return nullptr;
            ListNode* head = cur;
            ListNode* dummy = new ListNode(1);
            ListNode* prev = dummy;
            prev->next = cur;
            for(int i = a+1; i < lists.size() ; i++){
                ListNode* temp = lists[i];
                if(!temp) continue;
                prev = dummy;
                cur = prev->next;
                while (temp || cur)
                {
                    if(temp && cur && temp->val >= cur->val){
                        
                        while (cur && temp->val >= cur->val)
                        {
                            prev = cur;
                            cur = cur->next;
                        }
                        if(!cur){

                            prev->next = temp;

                            break;
                        }else {
                            prev->next = temp;
                            prev = temp;
                            temp = temp->next;
                            prev->next = cur;

                        }
                        
                    }
                    else if(cur && temp && temp->val < cur->val){
                        ListNode* temp2 = temp;
                        ListNode* tempprev = prev;
                        while(temp && temp->val<= cur->val){
                            tempprev = temp;
                            temp = temp->next;
                        }
                        if(!temp){
                            prev->next = temp2;
                            tempprev->next = cur;
                            break;
                        }
                        else{
                            prev->next = temp2;
                            tempprev->next = cur;
                            prev = cur;
                            cur = cur->next;
                        }
                    }
                   else  if(temp){
                        prev->next = temp;
                        break;
                        
                    }
                    else  if(cur){
                        prev->next = cur;
                        break;

                    }

                }
                
            } 
            return dummy->next;
    }
int main(){
        ListNode* one = new ListNode(-1);
        ListNode* two = new ListNode(1);
        ListNode* head = one;
         one->next = two;
        ListNode* sone = new ListNode(-3);
        ListNode* stwo = new ListNode(1);
        ListNode* sthree = new ListNode(4);
        ListNode* shead = sone;
         sone->next = stwo;
        stwo->next = sthree;
        ListNode* tone = new ListNode(-2);
        ListNode* ttwo = new ListNode(-1);
        ListNode* tthree = new ListNode(0);
        ListNode* tfourth = new ListNode(2);
        ListNode* thead = tone;
         tone->next = ttwo;
        ttwo->next = tthree;
          tthree->next = tfourth;
        vector<ListNode*> vec = {head,shead, thead };
        
        printLL(mergeKLists(vec));
}