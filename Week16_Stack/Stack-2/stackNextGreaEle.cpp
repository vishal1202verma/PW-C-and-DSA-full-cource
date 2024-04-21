#include<iostream>
#include<stack>
using namespace std;
int main (){
  int arr[] = {3 , 1, 4, 7, 2, 6, 8, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  // print the aray
  for( int i=0; i<n; i++){
       cout<<arr[i]<<" ";
  }
  cout<<endl;
  int nge[n]; // this is next greatest element array
  nge[n-1] = -1;
  // Stack 
  stack<int>st;
  st.push(arr[n-1]);

  for( int i= n-2; i>=0; i--){
    // we will pop all element which is small than the current arr[i]
    while( st.size()>0 && st.top()<=arr[i]){
          st.pop();
    }
    // mark the  element into stack
    if( st.size() == 0) nge[i] = -1;
    else nge[i] = st.top();
    // push the ele into stack
    st.push( arr[i]);

  }
  //print the nge array
  for( int i=0; i <n; i++){
     cout<<nge[i]<<" ";
  }
  cout<<endl;

}