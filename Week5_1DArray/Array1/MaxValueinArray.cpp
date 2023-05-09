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
// Max value
int max = arr[0];
for(int i=1; i<n-1; i++){
    if(max < arr[i]){
        max = arr[i];
    }

}
cout<<"the maximum value of the array is :"<<max;


}