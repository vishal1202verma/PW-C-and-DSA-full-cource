// Roatate the LinkedList with K
// Remove Duplicates from sorted LinkedList
#include<iostream>
#include<algorithm>
#include<vector>
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
ListNode* merge(ListNode* list1, ListNode* list2) {
            ListNode* a = list1;
            ListNode* b = list2;
            ListNode* c = new ListNode(100);
            ListNode* temp = c;
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
   ListNode* sortList(ListNode* head) {
        if( head == NULL || head->next == NULL) return head; // base case
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        // BY Using MergeSort 
        // first we will spilt this linked list into part
        int n = 0;
        while( temp != NULL){
            n++;
            temp = temp->next;
        }
        if( n%2 == 0){ // n is even now we will find left middle node
           while(  fast->next != NULL && fast->next->next != NULL){
              slow = slow->next; // now slow is on left Middle node
              fast = fast->next->next;
           }
        }
           // now slow is left middle node
           ListNode* a = head;
           ListNode* b = slow->next;
           slow->next = NULL;
        
        // By recursion we will sort these a and b == Merge Sort Algo
         a = sortList(a);
         b = sortList(b);
         // now we will merge these two sorted lists by merge function
         ListNode*c = merge(a, b);
         return c;
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