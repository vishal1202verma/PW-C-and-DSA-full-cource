#include<iostream>
using  namespace std;
int main(){
//   int arr [3][3] = {{1, 2 ,3} ,{4 ,5,6},{7 ,8, 9}}; // initilizing array2D
  int arr [3][3] = {1, 2 ,3,4 ,5,6,7 ,8, 9}; // initilizing array2D
  // rows -->0,1,2
  //coumn--> 0, 1, 2, ,3  
  cout<<arr[1][2]<<endl;

  // Traversal throuh 2D Array 
  for(int i=0; i<=2; i++){ // i is row
  for(int j=0; j<=2; j++){ // j is colomn
    cout<<arr[i][j]<<" "; 
  }
  cout<<endl;
  }

}

