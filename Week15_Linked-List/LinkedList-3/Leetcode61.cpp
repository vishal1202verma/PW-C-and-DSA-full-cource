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
   ListNode* rotateRight(ListNode* head, int k) {
        // find the size
        if( head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* tail = NULL;
        int n = 0;
        while(temp != NULL){
            if( temp->next == NULL) tail = temp;
            n++;
            temp = temp->next;
        }
        k = k%n;
        if( k==0) return head;
        // i have to place temp at ( n-k)th position
        temp = head;
        for( int i=1; i<n-k; i++){
            temp = temp->next;
        }
        tail->next =head;
        head = temp->next;
        temp->next = NULL;
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
    rotateRight(a , 2);
    display(a);

}