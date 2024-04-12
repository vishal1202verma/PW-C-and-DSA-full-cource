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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if( left == right) return head;
        ListNode* temp = head;
        int n =1;
        // now will divide this list into three parts
        ListNode* a = NULL; 
        ListNode* b = NULL; 
        ListNode* c = NULL; 
        ListNode* d = NULL; 
        // now we will implement these node onto list in three different parts
        // 1 to left-1, left to right, right+1 to n
        while( temp != NULL){
            
            if( n == left-1) a = temp;
            if( n == left) b = temp;
            if( n == right) c = temp;
            if( n == right +1) d = temp;
            temp = temp->next;
            n++;

        }   
        if(a != NULL) a->next = NULL;
        c->next = NULL;
        // we will reverse part between left and right
        c = reverseList(b);
        // now well merge all these lists
        if(a != NULL)a->next = c;
        b->next = d;
        if( a != NULL)return head;
        else return c;

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

