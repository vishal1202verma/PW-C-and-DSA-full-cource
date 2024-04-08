// Remove Nth element from the end of the LinkedList
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

 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        // int len = 0;
        // while( temp != NULL){
        //     len++;
        //     temp = temp->next;
        // }
        // if( n == len){
        //     head = head->next;
        //     return head;
        // }
        // // nth fro end = (len-n+1)th from start
        // int m = len - n + 1;
        // int idx = m-1; // the idx of node to be delete
        // temp = head;
        // for( int i=1; i<= idx-1; i++){
        //     temp = temp->next;
        // }
        // temp->next = temp->next->next;
        ListNode* slow = head;
        ListNode* fast = head;
        for( int i=1; i<=n+1; i++){
            if( fast == NULL) return head->next;
             fast = fast->next;
        }
        while( fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        cout<<head;
        
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
    ListNode * c = new ListNode(8);
    ListNode * d = new ListNode(9);
    ListNode * e = new ListNode(10);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    removeNthFromEnd(a, 5);
    display(a);





    }