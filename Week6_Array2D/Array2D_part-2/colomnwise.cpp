#include<iostream>
#include<vector>
using namespace std;
int main (){
  
int m;
cout<<"enter row of 1st matrix :";
cin>>m;
int n;
cout<<"enter column of 1st matrix :";
cin>>n;
cout<<endl;   
 int arr[m][n];
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
   
   }
   cout<<endl;
   // column wise print 
    for(int j=0; j<n; j++){
    for(int i=0; i<m; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }


    // spiral print 
    // for(int i=0; i<m; i++){
    //     if( i%2 ==0){
    //         for(int j=0; j<n; j++ ){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{ // i=1, 3 ,5, 
    //         for(int j=n-1; j>=0; j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
     
    // }
    

}    