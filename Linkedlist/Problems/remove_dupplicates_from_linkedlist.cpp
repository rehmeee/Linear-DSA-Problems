#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
class ListNode
{
public:
    int age;
    ListNode *next;
    ListNode(int age)
    {
        this->age = age;
        next = NULL;
    }
};
void printLL(ListNode* head){
    ListNode* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->age<<endl;
        temp = temp->next;
    }
}

ListNode* setHead(ListNode* head){
    ListNode* temp = head;
    ListNode* temp2 = temp->next;
    while (temp->age == temp2->age)
    {
        temp2 = temp2->next;
    }
    head = temp2;
    temp = head;
    cout<<temp->age<<endl;
    temp2 = temp->next;
    cout<<temp2->age<<endl;
    return temp->age == temp2->age ? setHead(head): head;
}
ListNode* deleteDuplicates(ListNode* head) {
    
                ListNode* dummy = new ListNode(0, head);  // Dummy node to handle edge cases
                ListNode* prev = dummy;
                ListNode* curr = head;
        
                while (curr != nullptr) {
                    if (curr->next && curr->age == curr->next->age) {
                        while (curr->next && curr->age == curr->next->age) {
                            curr = curr->next;  // Skip duplicates
                        }
                        prev->next = curr->next;  // Remove duplicates
                    } else {
                        prev = prev->next;  // Move prev forward
                    }
                    curr = curr->next;
                }
                return dummy->next;  // Return the new head
            }
       
       
        

int main()
{
    ListNode *one = new ListNode(1);
    ListNode *two = new ListNode(1);
    // ListNode *three = new ListNode(3);
    // ListNode *fourth = new ListNode(3);
    // ListNode *fifth = new ListNode(4);
    // ListNode *sixth = new ListNode(5);
    // ListNode *seventh = new ListNode(6);
    ListNode *head = one;
    one->next = two;
    // two->next = three;
    // three->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;
    head = deleteDuplicates(head);
    printLL(head);

}