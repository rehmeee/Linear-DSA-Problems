#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Node{
    public: 
    int val;
    Node* next;
    Node* random;
    Node(int _val){
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    if(!head) return nullptr;
    unordered_map<Node*, Node*> map;
    Node* temp = head;
    
    // Create new head
    Node* newHead = new Node(temp->val);
    Node* tempHead = newHead;
    map[temp] = tempHead;
    temp = temp->next;
    
    // First loop: Copy all nodes and store mapping
    while (temp != NULL) {
        tempHead->next = new Node(temp->val);
        tempHead = tempHead->next;
        map[temp] = tempHead;  // Store every node mapping
        temp = temp->next;
    }
    
    // Second loop: Assign random pointers
    temp = head;
    tempHead = newHead;
    while (temp != NULL) {
        if (temp->random) {
            tempHead->random = map[temp->random];  // Assign random pointers
        }
        temp = temp->next;
        tempHead = tempHead->next;
    }
    
    return newHead;
            

}
void printLL(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
int main(){
        	Node* one = new Node(7);
        	Node* two = new Node(13);
        	Node* three = new Node(11);
        	Node* four = new Node(10);
            Node* head = one;
            one->next= two;
            two->next = three;
            three->next = four;
            one->random = NULL;
            two->random = one;
            three->random = four;
            four->random = three;
            head = copyRandomList(head);
            printLL(head);
}