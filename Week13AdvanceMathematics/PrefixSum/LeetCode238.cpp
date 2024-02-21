// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.
// Example 1:
// 
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int p2 = 1;
        int noz = 0;
        for(int i=0; i<n; i++){
            if(nums[i] ==0) noz++;
            product = product*nums[i];
            if(nums[i] != 0) p2= p2*nums[i];
        }
        if(noz>1) p2 =0;
        for(int i=0; i<n; i++){
            if(nums[i] ==0) nums[i] = p2;
            else nums[i] = product/nums[i];

        }
        // Printing the Array 
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
}

int main (){
vector<int>nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(4);
productExceptSelf(nums);






}