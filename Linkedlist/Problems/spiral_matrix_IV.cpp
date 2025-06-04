#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 2326. Spiral Matrix IV

    class ListNode{
        public:
            int val;
            ListNode* next;
            ListNode(int val){
                this->val = val;
                next = NULL;
            }
    };

    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int l = 0 , r = n-1, t = 0, b = m-1;
        vector<int> vec(n, -1);
        vector<vector<int>> ans(m , vec);
        if(!head) return ans;
        ListNode* cur = head;
        while (cur && t<=b && l<=r)
        {
            // for left side 
            int templeft = l, tempright = r, tempbot = b, temptop = t;
            while(cur && templeft<= r){
                ans[temptop][templeft++] = cur->val;
                cur = cur->next;
                
            }
            ++temptop;
            // for right side
            while(cur && temptop < tempbot){
                ans[temptop++][tempright] = cur->val;
                cur = cur->next;
            }
            // for bottom 
            while (cur && tempright>= l)
            {
                ans[b][tempright--]= cur->val;
                cur = cur->next;
            }
            tempbot--;
            while(cur && tempbot> t){
                ans[tempbot--][l] = cur->val;

                cur = cur->next;
            }
            ++l;
            --r;
            ++t;
            --b;

            
            

        }
        return ans;
        

    }

int main(){
        	ListNode* one = new ListNode(8);
            ListNode* two = new ListNode(24);
            ListNode* three = new ListNode(5);
            ListNode* fourth = new ListNode(21);
            ListNode* fifth = new ListNode(10);
            ListNode* head = one;
             one->next = two;
            two->next = three;
              three->next = fourth;
            fourth->next = fifth;
            ListNode* sone = new ListNode(11);
            ListNode* stwo = new ListNode(11);
            ListNode* sthree = new ListNode(12);
            ListNode* sfourth = new ListNode(6);
            ListNode* sfifth = new ListNode(17);
            fifth->next = sone;
             sone->next = stwo;
            stwo->next = sthree;
              sthree->next = sfourth;
            sfourth->next = sfifth;
            // ListNode* tone = new ListNode(5);
            // ListNode* ttwo = new ListNode(5);
            // ListNode* tthree = new ListNode(0);
            // sfifth->next = tone;
            //  tone->next = ttwo;
            // ttwo->next = tthree;
            vector<vector<int>> vec = spiralMatrix(10,1, one);
            for(auto x: vec){
                for(auto y: x){
                    cout<<y<<endl;
                }
            }
}