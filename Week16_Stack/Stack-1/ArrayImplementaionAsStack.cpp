#include<iostream>
#include<vector>
using namespace std;

class stack{
  public :
  int arr[5];
  int idx = -1;   
  int n = 0;
  void push(int val){
     idx++;
     arr[idx] = val;
  }

  void pop(){
    idx--;
  }

  int top(){
    return arr[idx];
  }
  
  int size(){
     return idx+1;
  }

};

void display(stack st){
      if( st.size() == 0) return;
      int x = st.top();
      st.pop();
      display(st);
      cout<<x<<" ";
      st.push(x);
}

int main (){

// user defined stack
 stack st;
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 cout<<st.size()<<endl;
 display(st);
 

}