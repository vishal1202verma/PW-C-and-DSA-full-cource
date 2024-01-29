#include<iostream>
using namespace std;
void PrintDisplay( int arr[], int n, int idx){
if(idx == n) return;    
cout<<arr[idx]<<" ";
PrintDisplay(arr, n, idx+1);

}

int main (){
int arr[] = {2,1,6,3,9,0,2,7,4};
int n = sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
PrintDisplay(arr, n, 0);

}