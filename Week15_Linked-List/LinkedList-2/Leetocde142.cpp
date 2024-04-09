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
    
    ListNode* detectCycle(ListNode *head) {
           ListNode* slow = head;
           ListNode* fast = head;
           bool flag = false;
           while( fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                if( fast == slow){
                    flag = true;
                    break;
                }
            }
                if( flag == false) return NULL;
                else{
                   ListNode* temp = head;
                   while( temp != slow){
                     slow = slow->next;
                     temp = temp->next;
                    }   
                     return slow;
                }

           
           return NULL;
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