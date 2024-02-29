#include<iostream>
using namespace std;
int main (){
  int arr [] = {1,3,1,2,5,2,4,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int res = 0;
  for(int i=0; i<n; i++){
    res = res ^ arr[i];
  }
  int temp = res;
  int k = 0;
  while( true ){
    if(temp & 1 == 1){
        break;
    }
    temp = temp >> 1;
    k++;

  }
  int retvel = 0;
  for(int i=0; i<n; i++){
    int num = arr[i];
    if(((num >> k) & 1) == 1){
        retvel = retvel ^ num;
    }
  }
  cout<<retvel<<" "<<endl;
  res = retvel ^res;
  cout<<res<<" ";
  
  
                       
}