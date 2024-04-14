#include<iostream>
#include<vector>
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

 vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode* temp = head;
        int n = 0;
        while( temp != NULL){
            n++;
            temp = temp->next;
        }
        // now we will find the parts size
        int size = n/k;
        int remainder = n%k;
        temp  = head;
        while( temp){
            ListNode*c = new ListNode(100);
            ListNode* tempC = c;
            int s = size;
            if(remainder>0) s++;
            remainder--; 
            for(int i=1; i<=s; i++){
                tempC->next = temp;
                temp = temp->next;
                tempC = tempC->next;
            }
            tempC->next = NULL;
            ans.push_back(c->next);
        }
        if( ans.size() <k){
        int extra = k - ans.size();
        for(int i=1; i<=extra; i++){
            ans.push_back(NULL);
        }
       }   
       return ans;

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
splitListToParts(a, 3);
display(a);

}