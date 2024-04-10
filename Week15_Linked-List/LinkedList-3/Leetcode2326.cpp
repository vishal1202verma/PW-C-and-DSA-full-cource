// Roatate the LinkedList with K
// Remove Duplicates from sorted LinkedList
#include<iostream>
#include<vector>
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
vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m, vector<int>(n, -1));
        ListNode* temp = head;
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
        while( minr <= maxr && minc <= maxc){
            // right
            for( int i = minc; i<=maxc; i++){
                if( temp == NULL) return arr; 
                 arr[minr][i] = temp->val;
                 temp = temp->next;
            }
            minr++;
            if( minr>maxr || minc>maxc) break;
            // down
            for( int i= minr; i<= maxr; i++){
                if( temp == NULL) return arr; 
                arr[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;

           if( minr>maxr || minc>maxc) break;
           // left
           for( int i= maxc; i>= minc; i--){
               if( temp == NULL) return arr; 
               arr[maxr][i] = temp->val;
               temp = temp->next;
           }
           maxr--;
           if( minr>maxr || minc>maxc) break;
           // top
           for( int i= maxr; i>=minr; i--){
              if( temp == NULL) return arr; 
              arr[i][minc]  = temp->val;
              temp = temp->next;
           }
           minc++;
           if( minr>maxr || minc>maxc) break;
        }
        return arr;
    
    }   
    
int main(){
    vector<vector<int>>ans;
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