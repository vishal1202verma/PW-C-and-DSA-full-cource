#include<iostream>
using namespace std;
int main(){
int arr[] = {2,4,5,6,7};
int*ptr = arr;// giving adrress
cout<<ptr<<endl;
ptr[0] = 8;
for(int i=0; i<=4; i++){
    cout<<arr[i]<<" ";
}
 cout<<endl;
for(int i=0; i<=4; i++){
    cout<<*ptr<<" ";
    ptr++;

}
ptr  = arr;
   

}