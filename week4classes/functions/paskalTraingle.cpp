#include<iostream>
using namespace std;
int fact =1;

int combination (int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;                            
 } 


int main(){
 
 int n;
 cin>>n;
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){

    }
 }
 



}