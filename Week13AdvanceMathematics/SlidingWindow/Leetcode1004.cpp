#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        // we will solve this by sliding window
        int i=0;
        int j=0;
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
        return maxlen;

    }
    int main (){
    //  nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
    int arr[] = {1,1,1,0,0,0,1,1,1,1,0};
    int n  = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr, arr+n);
    int k = 2;
    cout<<longestOnes(nums, k);
      

    }