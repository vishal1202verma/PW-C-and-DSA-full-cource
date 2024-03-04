#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
 bool isPrime(int nums) {
          if(nums==1) return false;
          for(int i=2; i<=sqrt(nums); i++){
              if(nums%i ==0) return false;
          }
          return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
         int n = nums.size(); // rows
         int m = nums[0].size();
         int mx =0;
         for(int i=0; i<n; i++){
             if(isPrime(nums[i][i])){
                 mx = max(mx, nums[i][i]);
             }
              if(isPrime(nums[i][n-i-1])){
                 mx = max(mx, nums[i][n-i-1]);
             }
         }
         return mx;
    }
    int main (){
    vector<vector<int>> nums = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    cout << diagonalPrime(nums);
    return 0;
    }