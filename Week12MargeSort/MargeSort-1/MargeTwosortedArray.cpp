#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>&arr1, vector<int>&arr2, vector<int>&arr3){
    int i=0; 
    int j =0;
    int k= 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{ // arr2[j]<= arr1[i]
        arr3[k] = arr2[j];
        k++;
        j++;
        }
    }
    if(i==arr1.size()){ //arr1 is end
        while(j<arr2.size()){
            arr3[k] = arr2[j];
            k++;
            j++;

        }

    }
    if(j==arr2.size()){
        while(i<arr1.size()){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    
}
int main (){
vector<int>arr1;
arr1.push_back(1);
arr1.push_back(2);
arr1.push_back(4);
arr1.push_back(5);
arr1.push_back(6);
int n = arr1.size();
vector<int>arr2;
arr2.push_back(3);
arr2.push_back(6);
arr2.push_back(7);
arr2.push_back(10);
arr2.push_back(12);
int m = arr2.size();
vector<int>arr3(n+m);

merge(arr1, arr2, arr3);
// printing the array
for(int i=0; i<arr3.size(); i++){
    cout<<arr3[i]<<" ";
}




}