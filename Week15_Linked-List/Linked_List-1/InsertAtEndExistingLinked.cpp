#include<iostream>
#include<algorithm>
using namespace std;

class Node{
     public :
     int val;
     Node*next;
     // constructor
     Node(int val){
        this->val = val;
        this->next = NULL;

     }
};
void display(Node* head){
    Node*temp = head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtEnd( Node* head, int val){
     Node* t = new Node(val);
     while( head->next != NULL) head = head->next;
     head->next = t;

}
int main (){
Node* a = new Node(10);
Node* b = new Node(20);
Node* c = new Node(30);
Node* d = new Node(40);

a->next = b;
b->next = c;
c->next = d;
// cout<<a->next->next->val<<endl;
// printing linkedlist

// Node* temp  = a;
// while(temp != NULL){
//     cout<<temp->val<<" ";
//     temp = temp->next;
// }

display(a);
insertAtEnd( a, 80);
display(a);



}