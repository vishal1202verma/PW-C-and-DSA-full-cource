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
   

     ListNode* partition(ListNode* head, int x) {
        if( head == NULL || head->next == NULL) return head;
         ListNode* temp = head;
         ListNode* left = new ListNode(100); // left ListNode which is less than the x
         ListNode* tempL = left;
         ListNode* right = new ListNode(200); // right LisNOde which is greater then the x
         ListNode* tempR = right;
         while( temp != NULL){
             if( temp->val < x){
                tempL->next = temp;
                tempL = tempL->next;
                temp = temp->next;
             }
             else{ // temp->val > x
                tempR->next = temp;
                tempR = tempR->next;
                temp = temp->next;
                
             }
         }
         // now we wil merge them together 
        tempL->next = right->next;
        tempR->next = NULL;
        return left->next;
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