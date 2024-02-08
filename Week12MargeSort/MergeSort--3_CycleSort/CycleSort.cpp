#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
int arr[] ={5,1,2,4,3};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
// now  we wil sort this array by Cycle Sort
 
 int i=0;
 while(i<n){
  int corectIdx = arr[i] -1; // it will give the correct idx of the number in array 
  if(i==corectIdx) i++;
  else{
      int  temp = arr[i];
        arr[i] = arr[corectIdx];
        arr[corectIdx] = temp;
        i++;
      }
  
 }
 // printing the Sorted Array
 cout<<"The Sorted array is here -->";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}


}