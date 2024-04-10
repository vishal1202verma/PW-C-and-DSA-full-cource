// Roatate the LinkedList with K
// Remove Duplicates from sorted LinkedList
#include<iostream>
#include<algorithm>
using namespace std;

class ListNode{
public :
int val;
ListNode*next;
ListNode(int val){
    this->val = val;
    this->next = NULL;
}
};

void display( ListNode* head){
       ListNode* temp = head;
       while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
       }
       cout<<endl;

}
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // poor way of solving this question
            ListNode* a = list1;
            ListNode* b = list2;
            ListNode* c = new ListNode(100);
            ListNode* temp = c;
            // while( tempA != NULL && tempB != NULL){
            //      if( tempA->val <= tempB->val){
            //           ListNode* t = new ListNode( tempA->val);
            //           tempC->next = t;
            //           tempC = t;
            //           tempA = tempA->next;

            //      }
            //      else{ // tempA >= tempB
            //         ListNode* t = new ListNode( tempB->val);
            //           tempC->next = t;
            //           tempC = t;
            //           tempB = tempB->next;

            //      }
            // }
            // if( tempA == NULL){
            //     tempC->next = tempB;
            // }
            // else{
            //     tempC->next = tempA;
            // }
            
            // Method -2 ||  S.C. = O(1)
            while( a != NULL && b != NULL){
              if( a->val <= b->val){
                  temp->next = a;
                  a = a->next;
                  temp = temp->next;
              }
              else{
                 temp->next = b;
                 b = b->next;
                 temp = temp->next;
              }

            
            }
              if( a== NULL) temp->next = b;
              else temp->next = a;
    
            return c->next;

    } 
    
int main(){
    ListNode* a = new ListNode(1);  
    ListNode* b = new ListNode(1);  
    ListNode* c = new ListNode(2);  
    ListNode* d = new ListNode(3);  
    ListNode* e = new ListNode(3);  

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    

}