#include<iostream>
#include<climits>
#include<stack>
using namespace std;
// print the stack 
void  print( stack<int>st){
    stack<int>temp;
    while( st.size() > 0){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    // putting elements back from temp to  st
    while( temp.size()>0){
        cout<<temp.top()<<" ";
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
    cout<<endl;
}
// push at bottom function
void pushAtIndex(stack<int> &st , int val, int idx){
 stack<int>temp;
 while( st.size()>idx-1){
    temp.push(st.top());
    st.pop();
 }
 // now we will insert ne wval into stack
 st.push(val);
 // now we will put ele from temp to st
 while( temp.size()>0){
    st.push(temp.top());
    temp.pop();
 }

}
int main (){
// declaration of the stack
stack<int>st;
st.push(2);
st.push(4);
st.push(6);
st.push(8);
print(st);
pushAtIndex(st , 5, 3 );
print(st);



}