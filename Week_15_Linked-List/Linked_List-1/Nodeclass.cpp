#include<iostream>
using namespace std;

class Node{
     public :
     int val;
     Node*next;
     // constructor
     Node(int val){
        this->val = val;
        this->next = NULL;

     }
};

int main (){

Node a(10);
Node b(20);
Node c(30);
Node d(40);

// forming all
a.next = &b;
b.next = &c;
c.next = &d;
d.next = NULL;
a.next->val = 70;
// cout<<a.next->val<<endl; // linked list connection
// cout<<a.next->next->val<<endl;
// cout<<a.next->next->next->val;

// now we will print linked list by using  loops
Node temp = a;
while( 1){
    cout<<temp.val<<" ";
    if(temp.next == NULL);
    temp = *(temp.next);
}

}