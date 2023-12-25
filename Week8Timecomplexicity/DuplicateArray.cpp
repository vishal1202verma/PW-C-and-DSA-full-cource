#include<iostream>
using namespace std;
int main (){
    //Brute method
    int arr [6] = {1,2,3,4,5,1};
    for(int i=0; i<6; i++){
       for(int j=i+1; j<6; j++){
        if(arr[i] == arr[j]){
            cout<<arr[i];
            break;
        }
       }
    }



       
            


}