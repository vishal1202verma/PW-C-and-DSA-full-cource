#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

   class Node{
   public:
   int val;
   Node* left;
   Node* right;
   // constructor
   Node(int val){
     this->val =  val;
     this->left = NULL;
     this->right = NULL;
   }
     
};
// binary tree display 
void display( Node* root){
    if( root == NULL) return;
    cout<<root->val<<" "; 
    display(root->left); // recursion 
    display(root->right);
       
}
int levels( Node* root){
    if( root == NULL) return 0;
    int ans = 1+ max( levels(root->left) , levels( root->right));
    return ans;


}

int main (){
Node* a = new Node(1); // root node
Node* b = new Node(42);
Node* c = new Node(32);
Node* d = new Node(40);
Node* e = new Node(35);
Node* f = new Node(16);
Node* g = new Node(75);

// now we connect them like a binary tree
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;
display(a);
cout<<endl;
int level = levels(a);
cout<<level<<endl;
int heightofTree = level -1;
cout<<heightofTree<<endl; 






}