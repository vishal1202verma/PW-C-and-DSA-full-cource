#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Node{ // user defined datatypes;
public :
int val;
Node* next; // next pointer of Node datatypes
// constructor
Node( int val){
   this->val = val;
   this->next = NULL;

}
};

class LinkedList{ // user defined data Structure
public :
 Node* head;
 Node* tail;
 int size;
 LinkedList(){ // constructor
    head = tail = NULL;
    size = 0;
 }
      
void insertAtEnd( int val){
    Node* temp = new Node(val);
    if( size ==0) head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
}

void display(){        
      Node* temp = head;
      while ( head != NULL){
       cout<<temp->val<<" ";
       temp = temp->next; 
      }
          
}

};
int main (){
LinkedList ll;
ll.insertAtEnd(10);
ll.insertAtEnd(20);
ll.insertAtEnd(30);
ll.insertAtEnd(50);
ll.insertAtEnd(80);
ll.display();
cout<<endl;
cout<<ll.size;

}