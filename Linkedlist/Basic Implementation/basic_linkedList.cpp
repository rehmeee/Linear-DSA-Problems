#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class Node
{
public:
    int value;
    Node* next;
    Node(int value){
        this->value= value;
        next = NULL;
    }
};
void addNodeAtEnd(Node* & first,int val){
    Node* newNode = new Node(val);
    newNode->next = nullptr;
    Node* temp = first;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    return;


}
int findNode(Node* & first, int n){
        Node* temp = first;
        while(temp != NULL){
            if(temp->value == n){
                return 1;
            }
            temp = temp->next;
        }
        return 0;
}
int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = nullptr;

    // Node* temp = first;
    // int n = 0;
    // while (n <5)
    // {
    //     cout<<temp->value<<endl;
    //     temp = temp->next;
    //     n++;
    // }
    addNodeAtEnd(first, 409);
    cout<<"after adding the note"<<endl;
    cout<<findNode(first, 40)<<endl;
    Node* temp2 = first;
    while(temp2 != NULL){
        cout<<temp2->value<<endl;
        temp2 = temp2->next;
    }
    
}