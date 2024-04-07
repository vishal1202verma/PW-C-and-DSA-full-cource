#include<iostream>
#include<algorithm>
using namespace std ;

// Delete Node in a Linked List

class Node{
public :
int val;
Node*next;
Node(int val){
    this->val = val;
    this->next = NULL;
}

};
void deleteEle( Node*head  , Node* target){
    if( head == target){
        head = head->next;
        // return head;
    }
     Node* temp = head;
     while( temp->next != target){
         temp = temp->next;
     }  
   
     temp->next = temp->next->next;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main (){
  Node * a = new Node(10);
  Node * b = new Node(20);
  Node * c = new Node(30);
  Node * d = new Node(40);
  Node * e = new Node(50);

  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  display(a);
  deleteEle(a, d);
  display(a);

 // leetcode 237 solution 
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//        node->val = node->next->val;
//        node->next = node->next->next;
//     }
// };


}
