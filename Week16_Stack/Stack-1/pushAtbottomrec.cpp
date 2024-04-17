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
int main (){
// declaration of the stack
stack<int>st;
st.push(2);
st.push(4);
st.push(6);
st.push(8);
displayRec(st);
pushAtbottomRec(st , 10);
cout<<endl;
displayRec(st);



}