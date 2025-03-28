#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
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



ListNode* swapPairs(ListNode* head) {
    class Solution {
        public:
            ListNode* swapPairs(ListNode* head) {
                if (!head || !head->next) return head; // Base case
                
                ListNode* temp = head->next;  // Store the second node
                head->next = swapPairs(temp->next);  // Recursively swap the remaining list
                temp->next = head;  // Swap current pair
                
                return temp;  // New head of this swapped pair
            }
        };        

}



int main()
{
    ListNode *one = new ListNode(10);
    ListNode *two = new ListNode(20);
    ListNode *three = new ListNode(30);
    ListNode *fourth = new ListNode(40);
    ListNode *head = one;
    one->next = two;
    two->next = three;
    three->next = fourth;
    head = swapPairs(head);
    printLL(head);

}