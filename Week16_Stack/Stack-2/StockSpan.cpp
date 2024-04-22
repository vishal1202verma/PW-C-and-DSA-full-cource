#include<iostream>
#include<stack>
using namespace std;

int main (){
int arr[] = {100, 80 ,60, 81, 70, 60,75, 85};
int n  = sizeof(arr)/sizeof(arr[0]);
for( int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

// now first we look prev greater array's index for span
int pgi[n]; // pgi = previous greater element's index array
pgi[0] = -1;
stack<int>st;
st.push(0);

for( int i=1; i<=n-1; i++){
  while( st.size()> 0 && arr[st.top()]<= arr[i]){
         st.pop();
  }
  if( st.size() == 0) pgi[i] = -1;
  else pgi[i] = st.top();
  st.push(i);

}

for( int i=0; i<n; i++){
    cout<<pgi[i]<<" ";
}
cout<<endl;
// now will solve tha span spna[i] = pgi[i] - i
int span[n];
for( int i=0; i<n; i++){
    span[i] = i-pgi[i];
    cout<<span[i]<<" ";
}






}