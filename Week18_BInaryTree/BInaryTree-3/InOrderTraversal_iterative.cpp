#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    // constructor
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void InOrder(Node* root){
     vector<int>v;
     stack<Node*>st;
     Node* nd = root;
     while(st.size()>0 || nd != NULL){
            if( nd != NULL){
                st.push(nd);
                nd = nd->left;
            }
            else{ // nd is null
              Node* temp = st.top();
              st.pop();
              v.push_back(temp->val);
              nd = temp->right;
            }
     }
     cout<<endl;
     // now we will print Inorder vector
     for( int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
     }
}

int main (){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    InOrder(a);

    

}