#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& nums, int target) {
    
        // int idx = -1;
        // for(int i=0; i<n; i++){
        //     if(nums[i] == target){
        //             idx = i;
        //     }
        // }
        // return idx;
        // binary SEearch
        // task no 1 to find the pivet where the array is sorted and the pivet will be the larget element
        // so for finding the pivet element
        int n = nums.size();
        int lo =0;
        int hi = n-1;
        int pivet = -1 ;// lowest smallest element
        if(n==2){
            if(target == nums[0]) return 0;
            else if (target == nums[1]) return 1;
            else{
                return -1;
            }
        }
        

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(mid ==0) {
                lo = mid+1; }
            else if (mid == n-1){
                 hi = mid-1;
                 }
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivet = mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivet = mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
            if(pivet == -1){// alredy sorted array no rotation of array
                lo =0;
                hi = n-1;
                // normal binary search on full array 
                while(lo<=hi){
                   int mid = lo + (hi-lo)/2;
                   if(nums[mid] == target){
                       return mid;
                   } 
                   else if (nums[mid]>target){
                       hi = mid-1;
                   }
                   else{
                       lo = mid + 1;
                   }
                }   
                return -1;
            } 
            // after finding pivet see the target
            if(target>=nums[0] && target<=nums[pivet-1]){
                lo =0;
                hi = pivet-1;
                // normal binary search
                while(lo<=hi){
                   int mid = lo + (hi-lo)/2;
                   if(nums[mid] == target){
                       return mid;
                   } 
                   else if (nums[mid]>target){
                       hi = mid-1;
                   }
                   else{
                       lo = mid+1;
                   }
                }
            }
            else{
                lo = pivet;
                hi = n-1;
                while(lo<=hi){
                   int mid = lo + (hi-lo)/2;
                   if(nums[mid] == target){
                       return mid;
                   } 
                   else if (nums[mid]>target){
                       hi = mid-1;
                   }
                   else{
                       lo = mid + 1;
                   }
                } 
                
            }
        }
        return -1;

}
int main (){
vector<int>nums;
int target = 3;
// 4,5,6,7,0,1,2
nums.push_back(4);
nums.push_back(5);
nums.push_back(6);
nums.push_back(7);
nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
cout<<search(nums, target);





}
