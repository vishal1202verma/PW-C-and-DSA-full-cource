#include<iostream>
#include<climits>
#include<stack>
using namespace std;

int main (){
// declaration of the stack
stack<int>st;
st.push(2);
st.push(4);
st.push(6);
st.push(8);
cout<<st.size()<<endl;

// printing the stack in reverse order 

// while( st.size() >0){
//     cout<<st.top()<<" ";
//     st.pop();
// }
// print the whole stack by using extra stack
stack<int>temp;
while( st.size() > 0){
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    temp.push(x);
}
// putting elements back from temp to  st
cout<<endl;
while( temp.size()>0){
      cout<<temp.top()<<" ";
      int x = temp.top();
      temp.pop();
      st.push(x);
}




}