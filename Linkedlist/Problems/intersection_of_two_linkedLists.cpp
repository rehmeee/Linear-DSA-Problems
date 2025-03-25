#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
// 160. Intersection of Two Linked Lists
class Node{
    public:
    int age;
    Node* next;
    Node(int age){
        this->age = age;
        next = NULL;
    }
};

Node *getIntersectionNode(Node *headA, Node *headB) {
        unordered_set<Node*> set;
        Node* temp = headA;
        while (temp != nullptr)
        {
            set.insert(temp);
            temp = temp->next;
        }
        temp = headB;
        while (temp != nullptr)
        {
            if(set.find(temp) != set.end()){
                return temp;
            }
            temp = temp->next;
        }
        
        return NULL;
        
}
int main(){
        	Node* one = new Node(10);
        	Node* two = new Node(20);
        	Node* three = new Node(30);
        	Node* fourth = new Node(40);
        	Node* fifth = new Node(50);
            Node* head = one;
            Node* secondOne = new Node(90);
            Node* secondTwo = new Node(80);
            Node* secondThree = three;
            Node* secHead = secondOne;
            secondOne->next = secondTwo;
            secondTwo->next = secondThree;
            one->next = two;
            two->next = three;
            three->next = fourth;
            fourth->next = fifth;
            //printLL(head);
            Node* temp = getIntersectionNode(head, secHead);
            cout<<temp->age<<endl;

            
}