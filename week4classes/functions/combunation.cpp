#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;

    }
    return f;
}

 int combination (int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;                            
 }             
 int permutaion (int n, int r){
    int npr = fact(n)/ fact(n-r);
    return npr;
    
 }


int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int r;
    cout<<"enter r :";
    cin>>r;
    // int nfact =1;
    // for(int i=1; i<=n; i++){
    //     nfact *=i;

    // }
    // int rfact = 1;
    // for(int i=2; i<=r; i++){
    //     rfact *= i;
    // }
    // int nrfact= 1; // (n-r)!
    // for ( int  i=2; i<=n-r; i++){
    //     nrfact *= i;
    // }

        // usinf functions we caluclate the combunation 
    
      int nfact = fact(n);
      int rfact = fact(r);
      int nrfact = fact(n-r);
    int ncr = combination(n, r);
    int npr  = permutaion(n, r);
    cout<<ncr;
                                       
}

