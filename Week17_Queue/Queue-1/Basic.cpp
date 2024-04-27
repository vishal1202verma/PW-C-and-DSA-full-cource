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
  q.pop();
  cout<<q.front()<<endl;
  cout<<q.back()<<endl;
  cout<<q.size();
   





}