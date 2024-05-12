#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class TreeNode{
public:
int val;
TreeNode* left;
TreeNode* right;
// constructor
TreeNode( int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;

}

};

TreeNode* Construct( int arr[], int n){
  queue<TreeNode*>q;
  TreeNode* root = new TreeNode(arr[0]);
  q.push(root);
  int i=1; 
  int j = 2;
  while( q.size()>0 && i<n){
    TreeNode* temp = q.front();
    q.pop();
    TreeNode* l; // left
    TreeNode* r; // right
    if( arr[i] != INT_MIN) l = new TreeNode(arr[i]);
    else  l = NULL;
    if( j != n && arr[j] != INT_MIN) r = new TreeNode(arr[j]);
    else r = NULL;
    temp->left =l;
    temp->right = r;
    if( l!= NULL) q.push(l); 
    if( r!= NULL) q.push(r); 
      i +=2;
      j += 2;
  }
  return root;

}

void Print(TreeNode* root){
queue<TreeNode*>q;
// if( root == NULL) return ;
q.push(root);
while( q.size()>0){
TreeNode* temp = q.front();
q.pop();    
cout<<temp->val<<" ";
if( temp->left != NULL) q.push(temp->left);
if( temp->right != NULL) q.push(temp->right);
}
cout<<endl;
}

int main (){
int arr[] = {1, 2, 3, 4, 5, INT_MIN ,6, INT_MIN, INT_MIN, 7, 8, 9 };
int n = sizeof(arr)/sizeof(arr[0]);
TreeNode* root = Construct(arr, n);
Print(root);



}