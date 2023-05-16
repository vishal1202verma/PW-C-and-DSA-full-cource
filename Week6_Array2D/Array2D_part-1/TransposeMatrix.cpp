#include<iostream>
using namespace std;
int main(){

    // Transpose is equal to printitng of colomns biase 
int m;
cout<<"ënter the num of rows  :" ;
cin>>m;
int n;
cout<<"enter the num of colomns :";
cin>>n;
int arr[m][n];
// taking input 
for(int i=0; i<m-1; i++){
    for(int j=0; j<n-1; j++){
        cin>>arr[i][j];
    }
   
}
cout<<endl;
// print 
for(int i=0; i<m-1; i++){
    for(int j=0; j<n-1; j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
// printing transpose 
for(int j=0; j<n; j++){
    for(int i=0; i<m; i++){
       cout<<arr[i][j];
    }
}

}
