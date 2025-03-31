#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;
    class Node{
        public:
            int val;
            Node* next;
            Node* prev;
            Node* child;
            Node(int val){
                this->val = val;
                next = NULL;
                child = NULL;
                prev = NULL;
            }
    };
    void printLL(Node* head){
        Node* temp = head;
        while (temp != nullptr)
        {
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    }
    
                Node* flatten(Node* head) {
                    Node *ptr = head, *tmp_next, *runner;
                    
                    while (ptr) {
                        if (ptr->child) {
                            
                            // Save the current next and connect the child to next
                            tmp_next = ptr->next;
                            ptr->next = ptr->child;
                            ptr->next->prev = ptr;
                            ptr->child = NULL;
                            
                            // Run till the end of the current list and connect last node to saved next
                            runner = ptr->next;
                            while (runner->next) runner = runner->next;
                            runner->next = tmp_next;
                            if (runner->next) runner->next->prev = runner;
                        }
                        
                        ptr = ptr->next;
                    }
                    
                    return head;
                }
        

        
        
int main(){
        	Node* one = new Node(1);
            Node* two = new Node(2);
            Node* three = new Node(3);
            Node* fourth = new Node(4);
            Node* fifth = new Node(5);
            one->child = two;

            Node* head = one;
             one->next = three;
            three->prev = one;
                two->next = fourth;
                fourth->prev = two;
                fourth->next  = fifth; 
                fifth->prev = fourth;
                head = flatten(head);
                printLL(head);
              
}