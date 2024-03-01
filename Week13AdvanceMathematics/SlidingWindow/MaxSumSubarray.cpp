#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k =3;
    int maxSum = INT_MIN;
    int prevSum = 0;
    for(int i=0; i<k; i++) {
       prevSum += nums[i];
          
    }
    maxSum = prevSum;
    // now we will create current sum using Sliding window Algo
    int i= 1;
    int j= k;
    int maxId = -1;
    while(j<n){
        int currSum = prevSum + nums[j] - nums[i-1];
        if(maxSum<currSum){
            maxSum = currSum;
            maxId = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxId;
    



}
// int main (){
// int arr[] = {7,1,2,5,8,4,9,3,6};
// int n = sizeof(arr)/sizeof(arr[0]);
// int k = 3;
// int Maxsum = INT_MIN;
// // we want to Subarray of size 3 // by BruitForce Algorithm
// for(int i=0; i<=n-k; i++){
//     int sum =0;
//     for(int j = i; j<=i+k-1; j++){
//           sum = sum + arr[j];
//     }
//     Maxsum = max(Maxsum, sum);
// }

// cout<<Maxsum<<endl;

// // Letus use the Sliding Window Algorithm
// cout<<MaxSumSubarray(arr, 3);



// }