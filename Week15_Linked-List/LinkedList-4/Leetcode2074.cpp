#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class ListNode{
public :
int val;
ListNode* next;
// constructor
ListNode( int val){
    this->val = val;
    this->next = NULL;
}
};

// revrse between functionis used 
      ListNode* reverseList(ListNode* head) {
    //  Method-1 Iterative way  // BY Three Pointers -> curr, prev and next
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while( curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        return prev;

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
        return c;

    }
    // main function of the problem   
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1; // it will measure the length wich will be reversed e.g.  => 1, 2, 3, 4 etc
        // in revrse function we have to send ( temp, 2, 2+gap);
        while( temp!= NULL && temp->next != NULL){
            int remLen =0;
            ListNode* t = temp->next;
            for( int i=1; i<=gap+1 && t!= NULL ; i++){
                t = t->next;
                remLen++;

            }
            if( remLen< gap+1) gap = remLen-1;
            if( gap%2 !=0) reverseBetween(temp, 2, 2+gap);
            gap++;
            for( int i=1; temp!= NULL && i<=gap; i++){
                 temp = temp->next;
            }
        }

        return head;
    }

// display 
void display(ListNode* head){
    ListNode* temp =head;
    while( temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main (){
ListNode* a = new ListNode(1);    
ListNode* b = new ListNode(2);    
ListNode* c = new ListNode(3);    
ListNode* d = new ListNode(4);    
ListNode* e = new ListNode(5);

a->next = b;
b->next = c;
c->next = d;
d->next = e;
display(a);
reverseEvenLengthGroups(a);
display(a);

}