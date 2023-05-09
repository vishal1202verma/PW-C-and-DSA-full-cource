#include<iostream>
using  namespace std;
int main (){
int n;
cout<<"enter size of Array :";
cin>>n;

// input
int arr[n];
for(int i =0; i<=n-1; i++){
    cin>>arr[i];
}
int x;
cout<<"enter the element you eant to search :";
cin>>x;
//Search 
// cheackmark 
bool flag =false; // false not present 
for(int i=0; i<n-1; i++){
    if( arr[i] == x){
       flag =true;
    }
    if(flag ==true) {
        cout<<"Present";

    }
    else cout<<" Not found";
}

}