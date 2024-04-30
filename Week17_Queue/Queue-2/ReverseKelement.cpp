#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main (){
queue<int>q;
q.push(2); // 2,1,3,4,5,6
q.push(1);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
int k = 2;
stack<int>st;
// now we will pop k size ele from queue and push them into stack
for( int i=0; i<k; i++){
    int x = q.front();
    q.pop();
    st.push(x);
    while( st.size()>0){
        int z = st.top();
        st.pop();
        q.push(z);
    }

}
// now i will push back the unreversed ele back to the reversed  element
for( int i=0; i<q.size()-k; i++){
    int x = q.front();
    q.pop();
    q.push(x);
}
// display the k sized revesed element
for( int i=0; i<q.size(); i++){
    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
}

}