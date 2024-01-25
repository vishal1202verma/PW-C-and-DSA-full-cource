#include<iostream>
using namespace std;
void print(int n){
   // base case
   if(n==0) return; // base case or termination condition 
   cout<<n<<endl;
   print(n-1);
}


int main (){
int n ;
cout<<"enter any inetegr n :";
cin>>n;
print(n);



}