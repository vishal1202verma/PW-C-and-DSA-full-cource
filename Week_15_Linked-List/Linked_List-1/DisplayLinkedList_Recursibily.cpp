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
void displayRec(Node* head){
    if( head == NULL) return;
    cout<<head->val<<" ";
    displayRec( head->next);
}
  

int Size( Node* head){
    Node*temp = head;
    int n = 0;
    while( temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
   
}

int main (){
Node* a = new Node(10);
Node* b = new Node(20);
Node* c = new Node(30);
Node* d = new Node(40);

a->next = b;
b->next = c;
c->next = d;
cout<<a->next->next->val<<endl;

displayRec(a);
cout<<"Size of Linked List : "<<Size(a);


}