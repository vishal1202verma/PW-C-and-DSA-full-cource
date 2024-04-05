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

class LinkedList{ // user defined dataStructure
 Node* head;
 Node* tail;
 int size;
 LinkedList(){
    head = tail = NULL;
    size = 0;
 }
      
void insertAtEnd( int val){
    Node* temp = new Node(val);
    if( size ==0) head = tail = NULL;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
}

};
void display(){        
      cout<<"display it";  
   
}
int main (){
display();
    

}

