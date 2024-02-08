#include<iostream>
#include<vector>
using namespace std;
int main (){
int arr[] = {5,4,1,2,3};    
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>nums(arr, arr+n);
for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
}
int i=0;
while(i<n){
    int correctIdx = nums[i]-1;
    if(i == nums[correctIdx] || nums[i] == n ) i++;
    else{
        swap(nums[correctIdx], nums[i]);
    }
              
}
// Printing the sorted array
for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
}


}