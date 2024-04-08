#include<iostream>
using namespace std;

class ListNode{
public :
 
 int val;
 ListNode* next;
 
    ListNode (int val){
      this->val = val;
      this->next = NULL; 
 }
};

int size(ListNode *head){
    ListNode* temp = head;
    int n = 0;
    while( temp != NULL){
        temp = temp->next;
        n++;
    }
    return n;

}
 // get element at any index of linkedList
    ListNode* getAtIndex( ListNode* head, int size){
           ListNode* temp = head;
           for( int i=1; i<size; i++){
               temp = temp->next;
           }
           return temp->next;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int n = size(temp);
        if( n ==1) return temp;
        if( n%2 != 0){ // odd LinkedList middle will be n/2
           return getAtIndex( head, n/2);
        }
        else { // even elements of the Linkedlist 
            return getAtIndex(head, n/2);
        }
        return head;  
    }

    // display the liked list
    void display( ListNode* head){
          ListNode* temp = head;
          while( temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
          }
          cout<<endl;
    }
int main (){
ListNode * a = new ListNode(2);
ListNode * b = new ListNode(5);
ListNode * c = new ListNode(8);
ListNode * d = new ListNode(9);
ListNode * e = new ListNode(10);

a->next = b;
b->next = c;
c->next = d;
d->next = e;

display(a);
cout<<middleNode(a);
// display(a);






}