#include<iostream>
#include<climits>
#include<stack>
using namespace std;
// print the recursive stack 
void  displayRec( stack<int> &st){
    if( st.size() == 0) return;
     cout<<st.top()<<" ";
     int x = st.top();
     st.pop();
     displayRec(st);
     st.push(x);

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

}