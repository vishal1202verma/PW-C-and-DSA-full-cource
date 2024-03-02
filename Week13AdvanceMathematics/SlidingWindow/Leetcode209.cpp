#include<iostream>
#include<vector>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        // we will sove this by Sliding Window with varaible length
        int i=0;
        int j=0;
        int sum =0;
        int len = 0;
        int  minlen = n+1;
        while(j<n){
            sum += nums[j];
               while(sum>=target){
                  len = j-i+1;
                  minlen = min(minlen, len);
                  sum -= nums[i];
                  i++;
                }
            
            j++;
        }
        if(minlen == n+1) return 0;
        return minlen;
        
    }
    int main (){
    // target = 7, nums = [2,3,1,2,4,3]
    int arr[] = {2,3,1,2,4,3} ;
    int n  = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr, arr+n);
    int target = 7;
    cout<<minSubArrayLen(target, nums);
    


    }


 