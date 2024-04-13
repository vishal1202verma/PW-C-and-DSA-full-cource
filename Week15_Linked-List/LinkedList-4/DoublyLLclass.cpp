#include<iostream>
#include<algorithm>
using namespace std;
// implementation of doubly listnode
class Node{
  public:  
  int val;
  Node* next;
  Node* prev;

  // constructor
  Node(int val){
     this->val = val;
     this->next = NULL;
     this->prev = NULL;
  }

};

class DLL {  //Doubly Linked list class // uder defined data structure
public :
Node* head;
Node* tail;
int size;
// constructor

DLL(){
 head = tail = NULL;
 size = 0;
}
// insert function
void insetAtTail(int val){
Node* temp = new Node(val);
if( size ==0) head = tail = temp;
else{
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}
size++;

}

// insert at head
void insetAtHead(int val){
Node* temp = new Node(val);
if( size ==0) head = tail = temp;
else{
     temp->next = head;
     head->prev = temp;
     temp = head;
}
size++;

}

// insert at index
void insertAtIdx(int val , int idx ){
    if( idx<0 || idx>size) cout<<"Invalid index";
    else if( idx ==0) insetAtHead(val);
    else if ( idx == size) insetAtTail(val);
    else{
       Node* t = new Node(val);
       Node* temp = head;
       for( int i=1; i<=idx-1; i++){
             temp = temp->next;
       }
       t->next = temp->next;
       temp->next = t;
       t->prev  = temp;
       t->next->prev = t;
       size++;
    }

}


// delete at head
void deleteAtHead(){
    if( size == 0){
        cout<<"List is empty";
        return ;
    }
    head = head->next;
    if( head != NULL )head->prev = NULL;
    if( head == NULL) tail = NULL;
    size--;
}
// delete At Tail
void deleteAtTail(){
    if( size == 0){
        cout<<"List is empty";
        return ;
    }
    else if ( size ==1){
        deleteAtHead();
        return;
    }
    Node* temp = tail->prev;
    temp->next = NULL;
    tail = temp; 
    size--;
}
// delete at index 

void deleteAtindex( int idx ){
    if( size == 0){
        cout<<"List is empty";
        return ;
    }
    else if ( idx<0 ||  idx >size){
        cout<<"invalid index";
        return;
    }
    else if ( idx == 0) return deleteAtHead();
    else if (idx == size-1) return deleteAtTail();
    else {
           Node* temp = tail->prev;
           for( int i=1; i<=idx-1; i++){
              temp = temp->next;
           }
           temp->next = temp->next->next;
           temp->next->prev = temp; 
           size--;
    }

}
// getAtIndex // get element at any index
int getAtidx(int idx){
if( idx<0 || idx>size){
    cout<<"Invalid index";
    return -1;
}
else if ( idx ==0) return head->val;
else if  (idx == size-1) return tail->val;
else{
    Node* temp = head;
    for( int i=1; i<=idx; i++){
        temp = temp->next;
    }
    return temp->val;
}
}

// display
void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" "; 
        temp = temp->next;
    }
    cout<<endl;
}


};

int main (){
DLL list;
list.insetAtTail(10);
list.insetAtTail(20);
list.insetAtTail(30);
list.display();






}