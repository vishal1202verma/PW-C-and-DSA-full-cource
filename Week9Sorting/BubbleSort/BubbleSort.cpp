#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
   int arr[] = {5,4,6,3,2,1};
   int n =6;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   // bubble sort
   // for(int i=0; i<n-1; i++){ // n-1 passes
   //  // tarvse
   //  for(int j=0; j<n-1-i; j++){
   //      if(arr[j]>arr[j+1]){// swap
   //         int temp = arr[j];
   //         arr[j] = arr[j+1];
   //         arr[j+1] = temp;
   //      }
   //  }
   // }
   // buble sort optimized
   for(int i=0; i<n-1; i++){ // n-1 passes
    // tarvse
    bool flag = true;
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){// swap
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           flag = false;
        }
    }
        if(flag == true){ // swap didn't happen this time
         break;
        }
   }

   cout<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }




}