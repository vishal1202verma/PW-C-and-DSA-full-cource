#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
int c =0; // global vairable 
int inversion(vector<int>& a, vector<int>& b){
   int count =0;
   int i =0 ; // a
   int j =0; // b
   while(i<a.size() && j.size()){
       if(a[i]>b[j]){
         count += (a.size()-i);
         j++;
       }
       else{ //a[i]<=b[j]
           i++;
       }
   }
   return count;

}
void merge(vector<int>&a, vector<int>&b, vector<int>&res){
    int i=0; 
    int j =0;
    int k= 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){ //arr1 is end
        while(j<b.size()) res[k++] = b[j++];
    }
    if(j==b.size())
        while(i<a.size()) res[k++] = a[i++];
}
void mergeSort(vector<int>&v){
     int n = v.size();
     if(n==1) return;
     int n1 = n/2;
     int n2 = n- n/2;
     vector<int>a(n1), b(n2);
     for(int i=0; i<n1; i++){
           a[i] = v[i];
    }
    
    for(int i=0; i<n2; i++){
            b[i] = v[i+n1];    
     }
     // magic recusrion
     mergeSort(a);
     mergeSort(b);
     // we will count the inversion 
     c += inversion(a, b);

     // merge 
     merge(a, b, v);   
     a.clear();
     b.clear();

}

int main (){
// method-1 Bruit force 
int a[] ={5,1,8,2,3};    // T.C. ==> O(n2);
int n = sizeof(a)/sizeof(a[0]);
vector<int>v(a, a+n);
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;
mergeSort(v);
cout<<"Total number of the inversion is :"<<c;
    

}