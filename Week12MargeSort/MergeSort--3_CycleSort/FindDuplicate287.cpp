#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
         int n = nums.size();
         int i =0;
        while(i<n){
          int correctIdx = nums[i];
          if(nums[correctIdx] == nums[i]) {
              return nums[i];
          }
          else{
              swap(nums[i], nums[correctIdx]);
          }
        }
          return 1000;

}


int main (){
int arr[] = {1,3,4,2,2};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>nums(arr, arr+n);
cout<<findDuplicate(nums);



}