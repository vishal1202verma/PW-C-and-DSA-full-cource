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

 vector<int> nodesBetweenCriticalPoints(ListNode* head) {
           vector<int>ans;
           ListNode* a = head;
           ListNode* b = head->next;
           ListNode*c = head->next->next;
           int idx = 1;
           int firstIdx = -1;
           int secondIdx = -1;
           if( c == NULL) return {-1 ,-1};
           while( c != NULL ){
                    if( b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                     if( firstIdx == -1) firstIdx = idx;
                     else secondIdx = idx;
                     
                    }
                    a = a->next;
                    b = b->next;
                    c = c->next;
                    idx++;

           }
           if( secondIdx == -1) return {-1, -1};
           int maxdis = secondIdx- firstIdx;
           // minumum distance between local minimum
           int mindis = INT_MAX; // minimum distance
           firstIdx = -1;
           secondIdx  = -1;
           a = head;
           b = head->next;
           c = head->next->next;
           idx = 1;
            while( c != NULL ){
                if( b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                firstIdx = secondIdx;
                secondIdx = idx;
                if( firstIdx != -1){
                    int d = secondIdx - firstIdx;
                        mindis = min(mindis, d); 
                }
            
                }
                a = a->next;
                b = b->next;
                c = c->next;
                idx++;

           }
           return  {mindis, maxdis};  

         
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
nodesBetweenCriticalPoints(a);
display(a);

}