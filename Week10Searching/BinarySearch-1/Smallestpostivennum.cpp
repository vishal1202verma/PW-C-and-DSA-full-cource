#include<iostream>
using namespace std;
int main (){
int arr[9] = {0,1,2,3,4,5,7,8};
int n  = 9;
// int target = 3;
// linear serach
// for(int i=0; i<n; i++){
//     if( i != arr[i]){
//         cout<<"this is the minimum sorted number in the array : "<<i<<endl;
//         break;
//     }
// }

// binary search
int lo =0;
int hi =n-1;
int ans  = -1;
while(lo<=hi){
int mid = lo + (hi-lo)/2;
   if(arr[mid] == mid ){
           lo = mid +1;
     }
     else{
        ans =mid;
        hi = mid -1;
     }
}
cout<<"this is the minimum mising number of this sorted array : "<<ans;



}