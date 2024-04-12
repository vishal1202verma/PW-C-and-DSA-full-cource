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

  ListNode* oddEvenList(ListNode* head) {
        if( head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        // first we will split this node list into two seperated odd list and enen list seperatilly
        ListNode* odd = new ListNode(100);
        ListNode* tempO = odd; // this temp list of odd list
        ListNode* even = new ListNode(200);
        ListNode* tempE = even; // this is the temp of eveen list
        // we will make bool for odd and even
        bool isOdd = true;
        // we will make a seperated list
        while( temp != NULL){
            // for odd 
            if( isOdd){
               tempO->next = temp;
               temp = temp->next;
               tempO = tempO->next; 

            }
            else{ // for even
               tempE->next = temp;
               temp = temp->next;
               tempE = tempE->next; 
            }
            isOdd = !isOdd; // toggle between even and odd
        }
            // now we will merge these two lists
        tempE->next = NULL;
        tempO->next = even->next;
        ListNode * result =  odd->next;
        delete odd;
        delete even;
        return result;
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
    oddEvenList(a);
    display(a);

    

}