#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr , arr+n);
    queue<int>q;
    stack<int>st;
    // first we will put all the vector ele into queue
    for( int i=0; i<n; i++){
        q.push(nums[i]);
    }
    // now 1st half of the queue will push into stack
    for( int i=0; i<n/2; i++){
        int x = q.front();
        st.push(x);
        q.pop();
        // now we will push stack's ele into again in queue 
    }
      while( st.size()>0){
            int x = st.top();
            st.pop();
            q.push(x); // 5 6 7 8 4 3 2 1
        }
    // now 1st( 2nd half of the queue will push into stack )
    for( int i=0; i<n/2; i++){
        int x = q.front();
        q.pop();
        st.push(x);    
    }
    // now we will put st.top and q.front , we wil push_back both into queue gain 
    while( st.size()>0 && q.size()>0){
         int x = st.top();
         st.pop();
         int y = q.front();
         q.pop();
         q.push(x);
         q.push(y);
    } // 8 4 7 3 6 2 5 1
    // now will revrse the queue and it will give us the anser
    for( int i=0; i<n; i++){
       int x = q.front();
       q.pop();
       st.push(x);
    }
    // now it will give us our anser
    while( st.size()>0){
        int x = st.top();
        cout<<x<<" ";
        st.pop();
    } // 1 5 2 6 3 7 
}
