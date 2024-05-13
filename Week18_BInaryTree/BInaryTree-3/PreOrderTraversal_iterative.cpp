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
     
void PreOrder(Node* root){
     stack<Node*>st;
     vector<int>v;
     st.push(root);
     while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        v.push_back(temp->val);
        if(temp->right != NULL) st.push(temp->right);
        if(temp->left != NULL) st.push(temp->left);
     }
     cout<<endl;
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
    PreOrder(a);
    

}