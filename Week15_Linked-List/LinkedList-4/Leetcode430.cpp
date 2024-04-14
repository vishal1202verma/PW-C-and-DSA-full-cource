// copy list with Random Pointer
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
public :
int val;
Node* next;
Node* prev;
Node* child;
// constructor
Node( int val){
    this->val = val;
    this->next = NULL;
    this->prev = nullptr;
    this->child = NULL;
}
};

Node* flatten(Node* head) {
        Node* temp = head;
        while( temp != NULL){
            Node* a = temp->next;
            if( temp->child != NULL){
          
             Node* c = temp->child;
             temp->child = NULL; // very imp
             // recursion
             c = flatten(c);
             temp->next = c;
             c->prev = temp;
             while( c->next != NULL){
                  c = c->next;
                 }
                  c->next = a;
                 if( a!= NULL)  a->prev = c;  
            
            }
            temp = a; 
        }
        return head;
    }

// display 
void display( Node* head){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main (){
Node* a = new Node(1);    
Node* b = new Node(2);    
Node* c = new Node(3);    
Node* d = new Node(4);    
Node* e = new Node(5);

a->next = b;
b->next = c;
c->next = d;
d->next = e;
display(a);


}