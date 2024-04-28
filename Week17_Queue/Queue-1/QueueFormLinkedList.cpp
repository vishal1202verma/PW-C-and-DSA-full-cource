#include<iostream>
using namespace std;

class Node{ // user defined data type
public :
int val;
Node *next;
// constructor
Node( int val){
    this->val = val;
    this->next = NULL;
}

};

// user defined Data Structure
class Queue{
public :
 Node* head;
 Node* tail;
 int size;
 // queue constructor
 Queue(){
   head = tail = NULL;
   size = 0;
 } 
 // insert at tail or push at queue using Node ( Linked List)
 void push( int val){
    Node* temp = new Node(val);
    if( size == 0) head = tail = temp;
    else {
      tail->next = temp;
      tail = temp;

    }
    size++;
 }

 void pop(){  //delete from head
      if( size ==0) {
        cout<<"Queue is Empty !";
        return ;
      }
      head = head->next;
      size --;
 }
 

 int fornt(){
    if( size == 0) {
        return -1;
    }
    return head->val;
 }
 
 int back(){
    if( size == 0) return -1;
    return tail->val;
 }
 
 void display(){
   Node * temp = head;
   while( temp != NULL){
      cout<<temp->val<<" ";
      temp =temp->next;
      size++;
   }
   cout<<endl;
 }
 
 bool empty(){
    if( size ==0) return true;
    else return false;
 }

};


int main (){
Queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.display();


}
