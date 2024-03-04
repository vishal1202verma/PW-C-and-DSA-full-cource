#include<iostream>
#include<cmath>
using namespace std;
void IsPrime(int num){
   if(num ==1 ) cout<<"Not prime" ;
//    else if(num ==2) cout<<"yes prime";
//    else if(num % 2 != 0){
//      cout<<"yes prime";
//    }
//    else{
//     cout<<"Not prime";
//    }
  for(int i=2; i<=sqrt(num); i++){
      if(num%i == 0) cout<<"Not prime";
      else cout<<"yes prime";
  }
  
}
int main (){
    int num;
    cout<<"Enter any num :";
    cin>>num;
    IsPrime(num);
       
        
}