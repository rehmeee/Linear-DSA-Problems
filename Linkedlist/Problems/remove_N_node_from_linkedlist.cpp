#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int age;
    Node* next;
    Node(int age){
        this->age = age;
        next = NULL;
    }
};
void printLL(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->age<<endl;
        temp = temp->next;
    }
    
}
Node* removeNode(Node* head, int n){
    unordered_map<int, Node*> map;
    int size = 0;
    Node* temp = head;
    while(temp != nullptr){
        map[++size] = temp;
        temp = temp->next;
    }
    if(size <=1) return nullptr;
    Node* temp2;
    if(size == n){
        head = head->next;
        return head;
    }
     while(n>=0){
        if(n ==1){
            n--;
            size--;
            continue;
        }
        else if(n==0){
            temp2 = map[size];
            break;
        }
        else {

            temp = map[size];
            size--;
            n--;
        }

     }
     temp2->next = temp;
    cout<<size<<endl;
    return head;
}
int main(){
    Node* one = new Node(10);
    Node* two = new Node(20);
    // Node* three = new Node(30);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);
    Node* head = one;
    one->next = two;
    // two->next = three;
    // three->next = fourth;
    // fourth->next = fifth;
    head = removeNode(head,2);
    printLL(head);
}