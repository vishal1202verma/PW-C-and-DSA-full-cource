#include<iostream>
#include<algorithm>

using  namespace std;
int main(){
int m;
cout<<"ënter the num of rows  :" ;
cin>>m;
int n;
cout<<"enter the num of colomns :";
cin>>n;
int arr[m][n];
for(int i=0; i<m-1; i++){
    for(int j=0; j<n-1; j++){
        cin>>arr[i][j];
    }
   
}
// int max 
int max = INT16_MIN;
for(int i=0; i<m-1; i++){
    for(int j=0; j<n-1; j++){
        if(max<arr[i][j]){
            max = arr[i][j];
        }
    }
    cout<<endl;      
}
cout<<max<<" ";


}