#include<iostream>
#include<climits>
#include<stack>
using namespace std;
// print the stack 
void  displayRec( stack<int> &st){
    if( st.size() == 0) return;
     int x = st.top();
     st.pop();
     displayRec(st);
     cout<<x<<" ";
     st.push(x);
}

// push at bottom function
void pushAtbottomRec(stack<int> &st , int val){
      if( st.size() == 0) {
           st.push(val);
           return;
      }
     int x = st.top();
     st.pop();
     pushAtbottomRec(st, val);
     st.push(x);

}
void reverse(stack<int>&st){
    if( st.size() == 1) return;
     int x = st.top();
     st.pop();
     reverse(st); // recursion
     pushAtbottomRec(st, x); // push at bottom the top of the st;  

}

int main (){
// declaration of the stack
stack<int>st;
st.push(2);
st.push(4);
st.push(6);
st.push(8);
st.push(10);
displayRec(st);
reverse(st);
cout<<endl;
displayRec(st);



}