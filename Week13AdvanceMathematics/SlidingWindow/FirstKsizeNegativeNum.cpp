#include<iostream>
#include<climits>
using namespace std ;
int main  (){
int arr[] = {2, 3, 4, 4, -7, -1, 4, -2 , 6};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
int p = -1; // prevous negative num
int ans[n-k+1];
for(int i=0; i<k; i++){                           
   if(arr[i]<0){
    p = i;
    break;
   }
}
if(p== -1) ans[0] = 1;
else ans[0] = arr[p];
// siding Window
int i = 1;
int j = k;
while(j<n){
    if(p>=i) ans[i] = arr[p];
    else{
        for( int x= i; x<=j; x++){
            if(arr[x]<0) {
                p = x;
                break;
            }
        }
        if( p != -1) ans[i] = arr[p];
        else ans[i] = 1;
    }   
    i++;
    j++;
}

// printing the ans array
for(int i=0; i<n-k+1; i++){
    cout<<ans[i]<<" "; 
}



}



