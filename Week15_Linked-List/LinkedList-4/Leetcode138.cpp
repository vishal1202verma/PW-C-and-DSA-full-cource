// copy list with Random Pointer
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
public :
int val;
Node* next;
Node* random;
// constructor
Node( int val){
    this->val = val;
    this->next = NULL;
    this->random = NULL;
}
};

Node* copyRandomList(Node* head) {
        // step-1 create a deep copy without assigning randomnode
        Node* temp = head;
        Node* c = new Node(100);
        Node* tempC = c;
        while( temp != NULL){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        Node* duplicate = c->next; 
        // step - 2  Alternate Merge  these two Linked List
        Node* a = head;
        Node* b = duplicate;
        Node* d = new Node(200);
        Node* tempD = d;
        while( a){
              tempD->next = a;
              a = a->next;
              tempD = tempD->next; 

              tempD->next = b;
              b = b->next;
              tempD = tempD->next;
        }
        // new alternate linked list
        d = d->next;

       // step-3 we will assign the random pointers by using two pointers
        Node* t1 = d; // t1 will always travel on original 
        while( t1 != NULL){
           Node* t2 = t1->next; // t2 is for duplicate
            if(t1->random != NULL ) t2->random = t1->random->next;
            t1 = t1->next->next;
        } 
        // step-4 Removing the connections
        // Just like odd even linked sepration
        Node* t = d; // t is temp of the alternatelinked list 
        Node* d1 = new Node(-1);
        Node* temp1 = d1;
        Node* d2 = new Node(-2);
        Node* temp2 = d2;
        while( t != NULL){
           temp1->next = t;
           t = t->next;
           temp1 = temp1->next;

           temp2->next = t;
           t = t->next;
           temp2 = temp2->next; 
        }
        temp1->next = NULL;
        temp2->next = NULL;
        // now the origan and random linked list are seprated
        d1 = d1->next; // original with random
        d2 = d2->next;  //   duplicate with random      

        return d2;
        
        
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
copyRandomList(a);
display(a);

}