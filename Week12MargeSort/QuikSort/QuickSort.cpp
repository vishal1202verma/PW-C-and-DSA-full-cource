#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition (int arr[], int si,int ei ){
         int pivot = arr[si];
         int count =0;
         for(int i = si+1; i<=ei; i++){
             if(arr[i]<=pivot){
                count++;
             }
         }
         int pivotIdx = count + si;
         // place the pivot on the pivotindx
         swap(arr[si], arr[pivotIdx]);
         // now we will do left and right element from the pivot
         int i=si;
         int j=ei;
         while(i<pivotIdx && j>pivotIdx){
            if(arr[i]<=arr[pivot]) i++;
            if(arr[j]>arr[pivot]) j--;
            else if (arr[i]>arr[pivot] &&  arr[j]<=arr[pivot]){
                 swap(arr[i], arr[j]);
                 i++;
                 j--;

            } 
         }

       return pivotIdx;
}       


void QuickSort(int arr[], int si, int ei){  //si = starting index , ei = end index
        if(si>=ei) return ;
        // 5,1,8,2,7,6,3,4
        int pivotIdx = partition(arr, si, ei);
        // 4 1 3 2 5 7 8 6
        QuickSort(arr, si, pivotIdx-1);
        QuickSort(arr, pivotIdx+1, ei); 

}
int main (){
  int arr[] = {5,1,8,2,7,6,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" "; 
  }
  cout<<endl;
  cout<<"The sortated array is here --> ";
  QuickSort(arr, 0, n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" "; 
  }

 // Time Complexcity ==> O(n.logn);
 // Space Complexcity ==> O(logn); // Space Consuption in call stack 
 // This is not stable
 
 
        


}