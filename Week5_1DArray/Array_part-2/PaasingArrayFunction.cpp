#include<iostream>
using namespace std;

void display (int a[]){
    for(int i=0; i<=5; i++){
        cout<<a[i] << " ";
    }
    return;
    cout<<endl;
}
int main(){
int arr[6]=  {1, 2, 3,4 ,5 ,4};
//accessing the elements of array in another function 
display(arr);






}