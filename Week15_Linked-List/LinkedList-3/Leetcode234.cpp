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
  
ListNode* reverseList(ListNode* head) {
        // method-2 Recursive Solution
        if( head == NULL || head->next == NULL) return head; 
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    } 

    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        // first we will make a shallow copy linked list so that we can reverse the list
        ListNode* copy = new ListNode(100);
        ListNode* tempC = copy;
        while( temp != NULL){
            tempC->next = new ListNode(temp->val);
            tempC = tempC->next;
            temp = temp->next;
        }
        // now we will reverse the copied list
        ListNode* rev = reverseList(copy->next);
        temp = head;
        while( temp!= NULL && rev != NULL){
            if( temp->val != rev->val ){
                return false;
            }
            temp = temp->next;
            rev = rev->next;
        }

        return true;
        
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

