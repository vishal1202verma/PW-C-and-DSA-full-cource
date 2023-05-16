#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse (vector<int> &nums , int i, int j){
    while(i<j){
        int temp = nums[i];
         nums[i] = nums[j];
         nums[j] = temp;
         i++;

         j--;
    }
    return;
}
void nextPermutaion(vector<int>&nums){
    int n= nums.size();
    // finding pivit index

    int idx = -1;
    for(int i= n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx =i;
            break;
        }
    }
    if(idx ==-1){
        reverse(nums.begin(), nums.end());
        return; 
    }
    // 2 sorting 
    reverse(nums.begin()+(idx+1), nums.end());
    //3 finding just greater number
    int j =-1;
    for(int i= idx+1; i<n; i++){
        if(nums[i]>nums[idx]){
            j=i;
            break;
        }
    }
    //swappping idx and j
    int temp = nums[idx];
    nums[idx]= nums[j];
    nums[j]= temp;
    return;

                  
    
    





        
    
                
    


}



