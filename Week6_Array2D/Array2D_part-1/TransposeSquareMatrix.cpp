#include<iostream>
using namespace std;
int main(){

    // Transpose is equal to printitng of colomns biase 
int m;
cout<<"ënter the num of rows/colomns  :" ;
cin>>m;

int arr[m][m];
// taking input 
for(int i=0; i<m-1; i++){
    for(int j=0; j<m-1; j++){
        cin>>arr[i][j];
    }
   
}
cout<<endl;
// print 
for(int i=0; i<m-1; i++){
    for(int j=0; j<m-1; j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
//  transpose 
for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
       int temp = arr[i][j];// saping of i, j and j, i
       arr[i][j] = arr[j][i];
       arr[j][i]=  temp;


    }
}




// printing transpose
for(int i=1; i<m; i++){
    for(int j=i+1; j<m; j++){
        cout<<arr[i][j];
    }
}

}
