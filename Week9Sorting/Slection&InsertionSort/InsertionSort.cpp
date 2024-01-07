#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr[] = {1, 4, 3,5,2};
int n= 5;
cout<<"this is the unsorted array :";
for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}
cout<<endl;
// selection sort
//unsorted array 
for(int i=0; i<n; i++){
int j=i;
while(j>=1){
    if(arr[j]>= arr[j-1]) break;
    else if(arr[j]<arr[j-1]){
        swap(arr[j], arr[j-1]);
    }
    j--;
}
 
// cout<<"this is the sorted array :";
for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}



}








}