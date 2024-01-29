#include<iostream>
#include<climits>
using namespace std;
int Maxvalue(int arr[], int n,  int idx, int max){
    if(n==idx) return max;
    if(max<arr[idx]){
        max = arr[idx];
    }
    Maxvalue(arr, n,  idx+1, max);
}
int main (){
int arr[] = {2,1,6,3,9,0,2,7,4};
int n = sizeof(arr)/sizeof(arr[0]);
// int max = arr[0];
// for(int i=0; i<n; i++){
//     if(max<arr[i]){
//         max = arr[i];
//     }
// }
//     cout<<max<<" ";
cout<<"the max value of the array is :";
cout<<Maxvalue(arr, n, 0, INT_MIN);

}