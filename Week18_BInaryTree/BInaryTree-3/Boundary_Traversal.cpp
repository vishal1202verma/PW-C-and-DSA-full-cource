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
// find level it will tell us no of levels
int levels( TreeNode* root){
if(root == NULL ) return 0;
return 1 + max(levels(root->left), levels(root->right));

}

void nthLevel(TreeNode* root, int curr, int level){ // it will traverse each level of tree
      if( root == NULL) return;
      if( curr == level) {
        cout<<root->val<<" ";
        return;
      }
      nthLevel(root->left, curr+1, level);
      nthLevel(root->right, curr+1, level);

}
void levelOrder(TreeNode* root){ // it will print each level nodes
    int n = levels(root);
    for( int i=1; i<=n; i++){
        nthLevel(root, 1, i);
        cout<<endl;
    }
}



int main (){
int arr[] = {1, 2, 3, 4, 5, INT_MIN ,6,7, INT_MIN,8, INT_MIN,9,10,11,INT_MIN, 12, INT_MIN, 13, INT_MIN, 14 ,15, 16, INT_MIN, 17, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN ,INT_MIN };
int n = sizeof(arr)/sizeof(arr[0]);
TreeNode* root = Construct(arr, n); // it wil construct the binary tree by given array
cout<<n;
levelOrder(root);



}