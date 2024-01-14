#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int arr[] = {1,2,4,5,6,18,19, 20};
int n = 8;
int target = 18;
for(int i=0; i<n; i++){
    if(arr[i] == target){
        cout<<"true";
        break;

    }
    else{
        cout<<false;
        break;
    }
}


    
}