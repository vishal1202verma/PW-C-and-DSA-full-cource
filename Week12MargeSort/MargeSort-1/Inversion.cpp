#include<iostream>
#include<vector>
using namespace std;


int main (){
// method-1 Bruit force 
int a[] ={5,1,8,2,3};    // T.C. ==> O(n2);
int n = sizeof(a)/sizeof(a[0]);
vector<int>v(a, a+n);
int count =0;
for(int i=0; i<n-1; i++){
   for(int j=i+1; j<n; j++){
        if(v[i]>v[j] ){
            count ++;
        }  
   }
   

}
cout<<"Total number of the inversion is :"<<count;




}