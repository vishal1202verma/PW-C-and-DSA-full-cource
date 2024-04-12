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
  
// bad approch
    // ListNode* getnodeAt( ListNode* head, int idx){
    //         ListNode* temp = head;
    //         for( int i=1; i<=idx; i++){
    //             temp = temp->next;
    //         }
    //         return temp;
    // }
    ListNode* reverseList(ListNode* head) {
        // Method-1 Iterative way  // BY Three Pointers -> curr, prev and next
        // ListNode* curr = head;
        // ListNode* prev = NULL;
        // ListNode* next = NULL;
        // while( curr != NULL){
        //     next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = next; 
        // }
        // return prev;

        // method-2 Recursive Solution
        if( head == NULL || head->next == NULL) return head; 
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;


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
    
    display(a);

    


}

