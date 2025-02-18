#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
class Node 	{
        public:
        string data;
        Node* next;
        Node* prev;
        Node(string data){
            this->data = data;
            next = nullptr;
            prev = nullptr;
        }
};
void printLL(Node* &first){
    Node* temp = first;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}
void insertintoLL(Node* &first, string s){
    Node* newNode = new Node(s);
    Node* temp = first;

    while (temp !=  NULL)
    {
        if(temp->data== "asad"){
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        return;
            
        }
        temp = temp->next;
    }
    
}
int main(){
   Node* first = new Node("rehman"); 
   Node* second = new Node("asad"); 
   Node* third = new Node("ali"); 
   first->next= second;
   second->next = third;
   second->prev = first;
   third->prev = second;
   insertintoLL(first, "cuhi");
   printLL(first);

        	
}