#include<iostream>
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
    bool hasCycle(ListNode *head) {
            ListNode* temp = head;
            ListNode* slow = head;
            ListNode* fast = head;

            while( fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if( fast == slow){
                    return true;
                }
            }        
            return false; 
    }

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
    ListNode * c = new ListNode(0);
    ListNode * d = new ListNode(-1);
    ListNode * e = new ListNode(10);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);




}