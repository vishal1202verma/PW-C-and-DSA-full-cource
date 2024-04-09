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
   ListNode* deleteDuplicates(ListNode* head) {
        if( head == NULL || head->next == NULL) return head;
        ListNode* tempA = head;
        ListNode* tempB = head->next; 
        // while( temp->next != NULL){
        //     if( temp->val == temp->next->val){
        //          temp = temp->next;
        //     }

        // }
        // return head;
        while( tempB != NULL){
            while( tempB != NULL && tempB->val == tempA->val){
             tempB = tempB->next;
             }
            tempA->next = tempB;
            // for next round
            tempA = tempB;
            if( tempB != NULL){
            tempB = tempB->next;

            }
        }
        return head;
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