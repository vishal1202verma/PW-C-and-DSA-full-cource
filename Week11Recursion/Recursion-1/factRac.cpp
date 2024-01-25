#include<iostream>
using namespace std;
void factupto(int n){
   
}
// factorial of n by recursion 
int factorial(int n){
//    base case   
   if( n ==1 || n==0) return 1;   
   int ans = n*factorial(n-1);
   // recurison call
   return ans;
}

int main (){
int n ;
cout<<"enter any inetegr n :";
cin>>n;
cout<<factorial( n);



}