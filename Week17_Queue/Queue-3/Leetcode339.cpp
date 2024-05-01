#include<iostream>
#include<vector>
#include<deque>
using namespace std;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // Method-3  USing Dequeue data structure
        int n = nums.size();
        if( k==1) return nums;
        deque<int>dq; // decreasing order of element
        vector<int>ans; // i should be min k-1
        for( int i=0; i<n; i++){
            while( dq.size()>0 && nums[i]>nums[dq.back()] ) dq.pop_back();
            dq.push_back(i);
            int j = i-k+1; // index of the start of the window 
            while( dq.front() <j) dq.pop_front();
            if( i>=k-1) ans.push_back(nums[dq.front()]);
        }
        // printing the ans array
        for( int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }

int main (){
// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
int arr[] = {1,3,-1,-3,5,3,6,7};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>nums(arr , arr+n);
int k = 3;
maxSlidingWindow(nums, k);



}