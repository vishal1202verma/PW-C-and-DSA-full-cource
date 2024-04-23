#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
class MinStack {
public:
    stack<int>st;
    MinStack() { // constructor 
                                                      
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
      return  st.top();
    }
    
    int getMin() {
        stack<int>helper;
        int mn = INT_MAX;
        while( st.size()>0){
            mn = min( mn, st.top());
            helper.push(st.top());
            st.pop();
        }
        while( helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return mn;
    }
};
int main (){
MinStack min;
min.getMin();



}
