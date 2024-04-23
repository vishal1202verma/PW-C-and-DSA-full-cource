#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        // Method-2 Stack 
        // first we will find the next greater element index array
        int n = nums.size();
        int ngi[n];
        ngi[n-1] = n;
        stack<int>st;
        st.push(n-1);
        for( int i= n-2; i>=0; i--){
            while( st.size()>0 && nums[st.top()] <= nums[i]){
                 st.pop();
            }
            if( st.size() ==0) ngi[i] = n;
            else ngi[i] = st.top();
            st.push(i);
        }
        // now we solve the problem using ngi
        vector<int> ans;
        for( int i=0; i<=n-k; i++){
            int mx = nums[i]; // starting of window se
            int j = i;
            while( j < i+k){ // if nge is inside the window
                mx = nums[j];
                j = ngi[j];

            }
            ans.push_back(mx);
        }
        for( int i=0; i<ans.size(); i++){
             cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    int main (){
       int arr[] = {1,3,-1,-3,5,3,6,7};
       int n = sizeof(arr)/sizeof(arr[0]);
       vector<int>nums( arr , arr+n);
       int k = 3;
       maxSlidingWindow( nums, k);
       




    }