#include<iostream>
#include<vector>
using namespace std;

class Node{ // user defined datatype
public:
    int val;
    Node* next;

    // constructor
    Node( int val){
        this->val = val;
        this->next = NULL;
    }


};

class stack{   // user defined data struvture
public:
    Node* head;
    int size; 
    stack(){  // constructor
        head = NULL;
        size = 0;
    }  
    // now we will make all the function of the stack
    void push( int val){
        Node* temp = new Node(val);
        temp->next = head;
        temp = head;
        size ++;
    }

    void pop(){
      if( head == NULL){
        cout<<" stack is empty !";
        return ;
      }
      head = head->next;
      size--;
    }
    
    int top(){
        if( head == NULL){
        cout<<" stack is empty !"<<endl;
        return -1;
        }
        return head->val;
    }

    void display(){
          Node* temp = head;
          while( temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
          }  
          cout<<endl;
    }

};

int main (){
 stack st;
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 cout<<st.size<<endl;
 



}