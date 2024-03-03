// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
// Example 1:
// Input: nums = [10,5,2,6], k = 100
#include<iostream>
#include<vector>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n = nums.size();
        int i=0; 
        int j=0;
        int count=0;
        int product = 1;
        while(j<n){
            product *= nums[j];
            while(product>=k){
                count += (j-i);
                product /= nums[i];
                i++;

            }
            j++;
            
        }
         while(i<n){
                count += (j-i);
                product /= nums[i];
                i++;

         }
        return count;
    }
    int main (){
    int arr[] = {10,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr, arr+n);
    int k =100;
    cout<<numSubarrayProductLessThanK(nums, k);
    


    }