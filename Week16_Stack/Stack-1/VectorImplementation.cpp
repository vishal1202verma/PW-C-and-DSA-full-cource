#include<iostream>
#include<vector>
using namespace std;

class stack{
  public :
  vector<int>v; // no overflow condition
  int n = 0;
  void push(int val){
    v.push_back(val);

  }

  void pop(){
    if( v.size() == 0){
        cout<<"stack is empty !"<<endl;
        return;
    }
    else v.pop_back();
    
  }
  
  int top(){
     if( v.size() == 0){
        cout<<"stack is empty !"<<endl;
        return -1;
    }
    return v[v.size()-1];
  }
  
  int size(){
     return v.size();
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