#include<iostream>
using namespace std;
int main (){
int arr[9] = {1,2,3,4,5,9,15,18,21};
int n  = 9;
int target = 12;
// upper bound 
// binary search
int lo = 0;
int hi = n-1;
bool flag = false;
while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid] == target){
        cout<<arr[mid-1];
        flag = true;
        break;
    } 
    else if (arr[mid]<target){
        lo = mid+1;
    }
    else{
        hi = mid-1;
    }
}
if(flag ==false) cout<<"the upper bound value of this sorted array is :"<<arr[lo];





}