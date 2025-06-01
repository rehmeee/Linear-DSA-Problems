#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
// 2095. Delete the Middle Node of a Linked List
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
ListNode *deleteMiddle(ListNode *head)
{
    ListNode *dumy = new ListNode(10);
    dumy->next = head;
    ListNode *temp = dumy;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    return dumy->next;
}
int main()
{
    ListNode *one = new ListNode(10);
    ListNode *two = new ListNode(20);
    ListNode *three = new ListNode(30);
    ListNode *fourth = new ListNode(40);
    ListNode *five = new ListNode(50);
    ListNode *head = one;
    one->next = two;
    two->next = three;
    three->next = fourth;
    fourth->next = five;
    printLL(deleteMiddle(head));
}