#include<iostream>
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
  

int sum( Node* root){
    if( root == NULL) return 0;
    int n = root->val;
    int leftSum = sum( root->left);
    int rightSum = sum( root->right);
    int  sum = n + leftSum + rightSum;
    return sum;
   

}

int main (){
Node* a = new Node(1); // root node
Node* b = new Node(2);
Node* c = new Node(3);
Node* d = new Node(4);
Node* e = new Node(5);
Node* f = new Node(6);
Node* g = new Node(7);

// now we connect them like a binary tree
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left = f;
c->right = g;

display(a);
cout<<endl;   
cout<<sum(a);




}