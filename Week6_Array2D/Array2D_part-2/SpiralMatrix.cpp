//  leetcode problem  
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
//    spiral printing 
int minr= 0; // minr= minimum row
int minc =0; // maxc = maximum column
int maxr = m-1;
int maxc =n-1;
while( minr<= maxr && minc<=maxc){
     // right 
     for(int j=minc; j<=maxc; j++){
        cout<<arr[minr][j]<<" ";
     }  
        minr ++;

        if(minr>maxr || minc>maxc)break;
     // down
     for(int i=minr; i<=maxr; i++){
        cout<<arr[i][maxc]<<" "; 
     }
        maxc --;
          if(minr>maxr || minc>maxc)break;
     // left
     for(int j= maxc; j>=minc; j--){
        cout<<arr[maxr][j]<<" ";
     }
        maxr --;
          if(minr>maxr || minc>maxc)break;
     //top
     for(int i=maxr; i>=minr; i--){
        cout<<arr[i][minc]<<" ";
     }   
        minc ++;

          
}       


}    