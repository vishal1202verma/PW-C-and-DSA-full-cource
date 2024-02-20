#include<iostream>
using namespace std;
int main (){
int nums[] = {1,2,3,5,7,9};// output will be nums = 1, 3, 6, 11, 18, 27;
cout<<nums[0]<<" ";
int n  = sizeof(nums)/sizeof(nums[0]);
for(int i=1; i<n; i++){
    nums[i] = nums[i] + nums[i-1];
    cout<<nums[i]<<" ";
}




}