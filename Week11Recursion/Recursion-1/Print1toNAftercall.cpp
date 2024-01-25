#include<iostream>
using namespace std;
void print(int n){
   // base case
   if(n==0) return; // base case or termination condition 
   print(n-1); // call
   cout<<n<<endl; // kam
}

int main (){
int n ;
cout<<"enter any inetegr n :";
cin>>n;
print(n);



}