#include<iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,1,12,13};
// cout<<arr[0]<<" ";
int n  = sizeof(arr)/sizeof(arr[0]);
for(int i=1; i<n; i++){
    arr[i] += arr[i-1];
    // cout<<arr[i]<<" ";
}
// check if any index i = x is exist from where equal sum of division of array is possible
bool flag = false;
int idx = -1;
for(int i=1; i<n; i++){
if(2*arr[i] == arr[n-1]){
    flag = true;
    idx = i;
    break;
}
}
if(flag) cout<<"Yes particion is possible at this index"<<idx;
else cout<<"Not Possible";






}