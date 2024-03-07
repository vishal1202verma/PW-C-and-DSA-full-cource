// Given an array of positive integers nums, return the number of distinct prime factors in the product of the elements of nums.

// Note that:

// A number greater than 1 is called prime if it is divisible by only 1 and itself.
// An integer val1 is a factor of another integer val2 if val2 / val1 is an integer.
 

// Example 1:

// Input: nums = [2,4,3,7,10,6]
// Output: 4

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
     // Sieve of Eratosthenes algorithm
    void fillSieve(vector<bool> &sieve) {
        int n = sieve.size() - 1;
        for (int i = 2; i * i <= n; i++) { // Corrected loop condition
            if (sieve[i]) { // Only proceed if i is marked as prime
                for (int j = i * i; j <= n; j += i) { // Corrected starting point
                    sieve[j] = 0; // Mark multiples of i as non-prime
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        for(int i=0; i<n; i++){
          mx = max(mx, nums[i]);
        }
        int p = mx;
        vector<bool>sieve(p+1, 1);
        fillSieve(sieve);
        if(n>0) sieve[0] =0; // 0 means not prime , 1 means prime
        if(n>1) sieve[1] = 0;
        vector<int>primes;
        for(int i=2; i<=p; i++){
            if(sieve[i] ==1){
                primes.push_back(i);
            }
        }
        vector<bool>taken(primes.size(), 0);
        for(int i=0; i<nums.size(); i++){
            int ele = nums[i];
            for(int j=0; j<primes.size(); j++){
                if(primes[j]>ele) break;
                if(ele % primes[j] == 0) taken[j] = 1;
            }
        }
        int count =0;
        for(int i=0; i<taken.size(); i++){
            if(taken[i] == 1) count++;

        }
        return count;
    }
    
    int main (){
    int arr[] =  {2,4,3,7,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);    
    vector<int>nums(arr, arr+n);
    cout<<distinctPrimeFactors(nums);
    
    


    }