#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int longestSubarray(vector<int>& nums) {
         int n = nums.size();
        // we will solve this by sliding window
        int i = 0;
        int j = 0;
        int k = 1; // it will remove only one integer
        int maxlen = INT_MIN;
        int len =0;
        int flips = 0;
        while(j<n){
         if(nums[j] == 1) j++;
         else if(nums[j] ==0) {
             if(flips <k){
               flips++;
               j++;  
             }
             else{  // (flips == k)
                 len = j-i;
                 maxlen = max(maxlen , len);
                // i ko just uske agge wale zero ke ek  index agge le jao 
                while( nums[i] ==1) i++; // after this nums[i] ==0
                i++;
                j++;

             }
         }
          len = j-i;
          maxlen = max(maxlen , len);  

        }
        return maxlen-1;

    }
    int main (){
    // nums = [0,1,1,1,0,1,1,0,1]
    int arr[] = {0,1,1,1,0,1,1,0,1};
    int n  = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr, arr+n);
    cout<<longestSubarray(nums);
      



    }