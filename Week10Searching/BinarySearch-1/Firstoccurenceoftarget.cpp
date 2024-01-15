#include<iostream>
using namespace std;
int main (){
int arr[9] = {1,2,3,3,5,3,15,18,21};
int n  = 9;
int target = 3;

int lo = 0;
int hi = n-1;
bool flag = false;
while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid] == target){
          if( arr[mid-1] != target){
          flag = true;
          cout<<mid;
           break;

          }
          else{
            hi = mid -1;
          }
    } 
    else if (arr[mid]<target){
        lo = mid+1;
    }
    else{
        hi = mid-1;
    }
}






}