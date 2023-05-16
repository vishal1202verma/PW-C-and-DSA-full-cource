#include<iostream>
using  namespace std;
int main(){
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
// print 
for(int i=0; i<m-1; i++){
    for(int j=0; j<n-1; j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}
}