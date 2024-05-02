// implementing queuee using stack
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
                  
    void push(int x) {
       s1.push(x);
    }
    
    int pop() {
        int x;
        while( s1.size()>0){
            x = s1.top();
            s2.push(x);
            s1.pop();
        }
        s2.pop();
        int last = x;
        while( s2.size()>0){
            x = s2.top();
            s2.pop();
            s1.push(x);
        }
        return last;
    }
    
    int peek() {
       int temp;
        while(!s1.empty()){
            temp=s1.top();
            s2.push(temp);
            s1.pop();
        }
        int last=temp;
        while(!s2.empty()){
            temp=s2.top();
            s2.pop();
            s1.push(temp);
        }
        return last;
    }
    
    bool empty() {
        
        return s1.empty();
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main (){
MyQueue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);

for( int i=0; i<4; i++){
    int x = q.peek();
    cout<<x<<" ";
    q.pop();
    q.push(x);
}


}