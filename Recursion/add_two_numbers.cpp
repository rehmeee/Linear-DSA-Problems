#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
// 2. Add Two Numbers
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};
void printLL(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{   
    if (!l1)
    {
        if (l2->val > 9)
        {
            ListNode *temp = new ListNode(l2->val % 10);
            if (!l2->next)
            {
                ListNode *temp2 = new ListNode(1);
                temp->next = temp2;
                return temp;
            }
            else
                l2->next->val += 1;
            temp->next=  addTwoNumbers(nullptr, l2->next);
            return temp;
        }
        else
        {
            return l2;
        }
    }
    else if (!l2)
    {
        int t = l1->val;
        if (l1->val > 9)
        {
            ListNode *temp = new ListNode(l1->val % 10);
            if (!l1->next)
            {
                ListNode *temp2 = new ListNode(1);
                temp->next = temp2;
                return temp;
            }
            else
                l1->next->val += 1;
            temp->next =  addTwoNumbers(l1->next, nullptr);
            return temp;
        }
        else
        {
            return l1;
        }
    }
    int val = l1->val + l2->val, r = 0, one = l1->val, two = l2->val;
    ListNode *temp = new ListNode(val);
    if (val > 9)
    {
        temp->val = val % 10;
        r = 1;
    }
    if (l1->next && l2->next)
    {
        l1->next->val += r;
        temp->next = addTwoNumbers(l1->next, l2->next);
        return temp;
    }
    else if (l1->next)
    {
        l1->next->val += r;
        temp->next = addTwoNumbers(l1->next, nullptr);
        return temp;
    }
    else if (l2->next)
    {
        l2->next->val += r;
        temp->next = addTwoNumbers(nullptr, l2->next);
        return temp;
    }
    else if(r>0){
        ListNode* temp2 = new ListNode(r);
        temp->next = temp2;
        return temp;
    }
    else return temp;
}
int main()
{
    ListNode *one = new ListNode(9);
    ListNode *two = new ListNode(9);
    ListNode *three = new ListNode(9);
    ListNode *fourth = new ListNode(9);
    ListNode *fifth = new ListNode(9);
    ListNode *sixth = new ListNode(9);
    ListNode *sev = new ListNode(9);
    one->next = two;
    two->next = three;
    three->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = sev;
    ListNode *sone = new ListNode(9);
    ListNode *stwo = new ListNode(9);
    ListNode *sthree = new ListNode(9);
    ListNode *sfour = new ListNode(9);
    ListNode *shead = sone;
    sone->next = stwo;
    stwo->next = sthree;
    sthree->next = sfour;
    printLL(addTwoNumbers(one, sone));
}