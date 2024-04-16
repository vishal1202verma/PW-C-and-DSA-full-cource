#include<iostream>
#include<stack>
using namespace std;

// printing stack function
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

}
int main (){
// creation a stack
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

// print the stack
print(st); 

// using two extra stack we can reverse the stack
stack<int>gt;
stack<int> rt;
while( st.size()>0){
    int x = st.top();
    gt.push(x);
    st.pop();
}

// second stack in  which we will put elemnt from gt to rt
while( gt.size() >0){
    rt.push(gt.top());
    gt.pop();
}

// and now we will put back  elements from rt to st
while( rt.size() > 0){
    st.push(rt.top());
    rt.pop();
}
cout<<endl;
print(st);

}