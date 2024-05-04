#include<iostream>
using namespace std;
int maxDia = 0;

    class TreeNode{
      public :
      int val;
      TreeNode* left;
      TreeNode* right;
      TreeNode(int val){
          this->val = val;
          this->left = NULL;
          this->right = NULL;

      }  
    };



    int levels( TreeNode* root){
        if( root == NULL) return 0;
        return 1 + max( levels( root->left) , levels( root-> right) );
    }

  
    int diameterOfBinaryTree(TreeNode* root) {
          // diameter = leftlevel + rightlevel
          if( root == NULL) return 0;
          int dia =  levels( root->left) + levels( root->right);
          maxDia = max( maxDia, dia);
          // for every node we have to check the levels left and right
          diameterOfBinaryTree(root->left);
          diameterOfBinaryTree(root->right);
          return maxDia;    
                                   

                   
    }
    int main (){
     TreeNode * a = new TreeNode(1);
     TreeNode* b = new TreeNode(2);
     TreeNode* c = new TreeNode(3);
     TreeNode* d = new TreeNode(4);
     TreeNode* e = new TreeNode(5);
     TreeNode* f = new TreeNode(6);
     TreeNode* g = new TreeNode(7);
     
     a->left = b;
     a->right = c;
     b->left = d;
     b->right = e;
     c->left = f;
     c->right = g;
     cout<<diameterOfBinaryTree(a); 
     


    }