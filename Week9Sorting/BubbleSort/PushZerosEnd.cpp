#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
   int arr[] = {5,0,1,2,0,0,4,0,3};
   int n = 9;
   // buble sort
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(arr[j] ==0){ // swap zero with next nonzeroelemrnt
            int temp  = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
      }
   }
   // sorting printing
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
 

}