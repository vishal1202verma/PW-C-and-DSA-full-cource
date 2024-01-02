#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr[] = {-5, 3, -4,21,12};
int n= 5;
cout<<"this is the unsorted array :";
for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}
cout<<endl;
// selection sort
//unsorted array 
for(int i=0;  i<n-1; i++){
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
cout<<"this is the sorted version of array by the selction sort method :";
for(int ele:arr){
 cout<<ele<<" " ;// for each loop
}
cout<<endl;
// Time Complexcity is O(n^2);
cout<<"vishal verma ji !";


}