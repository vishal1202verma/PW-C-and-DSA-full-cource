#include<iostream>
using namespace std;
int main (){
    int n =4;
    // cout<<"enter the number of rows :";
    // cin>>n;
    int nst =1; // nst= no of star
    int nsp =n-1; // nsp = no os spaces
    for(int i=1; i<=2*n-1; i++){
          //spaces
          for(int j=1; j<=nsp; j++){ 
         cout<< " ";}

      if(i<=n-1) nsp--;
      else nsp++;
       for(int k=1; k<=nst; k++){
        cout<<"*";
       }
       if(i<=n-1)nst+=2;
       else nst-=2;
       cout<<endl;
        
    }

}