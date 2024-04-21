#include<iostream>
#include<stack>
using namespace std;
int main (){
// int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
int n = sizeof(arr)/sizeof(arr[0]);
// print the array
for( int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int prev[n];
prev[0] = -1;
// By using stack we will find the array of previous greater element
stack<int>st;
st.push(arr[0]);
for( int i=1; i<n; i++){
// now we will pop all the ele which is small than the prev
     while( st.size()>0 && st.top()<= arr[i]){
              st.pop();    
     }  
    //  mark the  ele into pev array
     if( st.size() == 0) prev[i] = -1;
     else prev[i] = st.top();
     // push the curren ele into stack
     st.push(arr[i]);
         

}
// print the prev greater element
for( int i=0; i<n; i++){
    cout<<prev[i]<<" ";
}
cout<<endl;


}