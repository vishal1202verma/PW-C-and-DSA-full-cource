#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr[] = {5,-3, 5,-4,2};
int n= 5;
for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}
cout<<endl;
// selection sort
for(int i=0;  i<n; i++){
    int min = INT_MAX;
    int mindx = -1;
        for(int j=i; j<n; j++){
            // minimum element and minimu mindex of range dibba
                if(arr[j]<min){
                    min = arr[j];
                    mindx = j;
                }          
        }    
        swap(arr[i], arr[mindx]); 
}   

for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}



}