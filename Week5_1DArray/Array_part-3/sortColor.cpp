#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColrs(vector<int>&nums){
//  doutch method algorithm 
    int lo = 0;
    int mid = 0;
    int hi  = nums.size()-1;
    //1) mid ke bare mai socho
    //2) 0 t0 lo-1 -> 0, hi+1 to end ->2
    // lo to mid-1 to -> 1

    while(mid<=hi){
         if(nums[mid] ==2){
            int temp =nums[mid];
            nums[mid] = nums[hi];
            nums[hi] = temp;
            hi--;
         }
         else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            lo++;
            mid++;
         }
         else mid++;
    }
    
    return;
}

int main(){
    vector<int>nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    sortColrs(nums);
     for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
     
  
  }