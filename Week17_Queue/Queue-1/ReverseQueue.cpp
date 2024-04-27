#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// display function 
void display(queue<int> &q){
    int n = q.size();
    for( int i=1; i<=n; i++){
     int x = q.front();
     cout<<x<<" ";
     q.pop();
     q.push(x);

    }
    cout<<endl; 
}
void reverse(queue<int> &q){
    stack<int>st;
    // now we will push all the queues ele into the stack
    while( q.size()>0 ){
       int x = q.front();
       q.pop();
       st.push(x);

    }
    // now we will push all the stacks element into the q
     while( st.size()>0){
      int x = st.top();
      st.pop();
      q.push(x);
    }
}

int main (){
  queue<int>q;
  stack<int>st;
  int n = q.size();
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  display(q);
  reverse(q);
  display(q);   




}