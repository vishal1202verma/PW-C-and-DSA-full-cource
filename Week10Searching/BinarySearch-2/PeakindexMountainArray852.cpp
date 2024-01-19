#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        // int idx = -1;
        // for(int i=1; i<=n-2; i++){
        //     if(arr[i]>arr[i-1] &&arr[i]>arr[i+1]){
        //         idx = i;
        //     }
        // }
        // return idx;
        // Binary search
        int lo = 1;
        int hi = n-2;
        // int idx = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                     return mid;
            }
            else if (arr[mid]>arr[mid+1]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return {};
 }
 int main (){
  vector<int>arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(3);
  arr.push_back(2);
  arr.push_back(1);
  cout<<peakIndexInMountainArray(arr);
  cout<<": the index of the mountain element of the array is ";  



 }