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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
          if(arr.size()== 0) return NULL;
          while(arr.size()>1){
             ListNode* a = arr[0];
             arr.erase(arr.begin());
             ListNode* b = arr[0]; 
             arr.erase(arr.begin());
             ListNode* c = merge(a, b);
             arr.push_back(c);

         }

        return arr[0];
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