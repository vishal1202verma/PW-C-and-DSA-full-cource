#include<iostream>
#include<stack>
#include<vector>
using namespace std;
    vector<int> canSeePersonsCount(vector<int>& arr){
        int n = arr.size();
        vector<int>ans(n);
        // first we will find the next greater element
        stack<int>st;
        st.push(arr[n-1]); 
        ans[n-1] = 0;
        for( int i= n-2; i>=0; i--){
            int count = 0;
            while( st.size()>0 && st.top()<arr[i]){
                st.pop();
                count++;
            }
            if( st.size() != 0) count++;
            ans[i] = count; 
            st.push(arr[i]);
        }
        for( int i=0; i<n; i++){
            cout<<ans[i]<< "";
        }  
        cout<<endl;

    }

int main (){
int heights[] = {10,6,8,5,11,9};
int n = sizeof(heights)/sizeof(heights[0]);
vector<int>arr(heights , heights+n);
canSeePersonsCount(arr);




}