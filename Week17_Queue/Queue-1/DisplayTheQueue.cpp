#include<iostream>
#include<queue>
using namespace std;
int main (){
  queue<int>q;
  // push
  // pop
  // front -> top
  // size, empty
  // back
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  // display the queue
  for(int i=1; i<=q.size(); i++){
       int x = q.front();
       cout<<x<<" ";
       q.pop();
       q.push(x);
  }







}