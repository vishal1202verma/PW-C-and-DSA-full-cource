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
void printFactors(int n){
    for(int i=1; i<=sqrt(n); i++){
        if(n%i ==0) {
        cout<<i<<" ";
        if( i != sqrt(n)) cout<<n/i<<" ";
        }
    }  
}
int main (){
    int num;
    cout<<"Enter any num :";
    cin>>num;
    // IsPrime(num);
    // printFactors(num);
     int factors = 1;
        int sum = 0;
         for(int i=1; i<num; i++){
             if(num%i ==0){
                factors = i;
               cout<<factors<<" "<<endl;
               sum += factors;
             }
         }
         cout<<sum;   
        
}