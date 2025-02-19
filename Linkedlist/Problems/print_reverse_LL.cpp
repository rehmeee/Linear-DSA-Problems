#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;
class Node 	{
        public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};
int main(){
        	Node* head = nullptr;
            Node* tail = nullptr;
            // creating lL using loop
            for (int  i = 0; i < 8; i++)
            {
                Node* newNode = new Node(1+i);
                if(head == nullptr){
                    head = newNode;
                    tail = newNode;
                    
                }
                else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }

            Node* temp = head;
            // while(temp != nullptr){
            //     cout<<temp->data<<endl;
            //     temp = temp->next;
            // }
            // delete temp;
            
            // print reverse Linked List

            stack<int> st;
            while (temp != nullptr)
            {
                st.push(temp->data);
                temp = temp->next;
            }
            while (!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }
            
            
            
}