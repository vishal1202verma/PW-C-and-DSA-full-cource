#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPrime(int n){
        if(n==1) return false;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i ==0) return false;                                                                             
        }
        return true;
    }
    int smallestValue(int n) {
        if(isPrime(n)) return n;
        int sum = 0;
        // kaam
        for(int i=1; i<sqrt(n); i++){ // O(sqrt(n));
            if(n%i ==0  && isPrime(i)){
                 int m = n;
                 while(m%i ==0){ // O(log m)
                     sum += i;
                     m /= i;
                 }                                                                       
            } 
        } 
        // this is for n/i half the factors after the square root
        for(int i=sqrt(n); i>=1; i--){
            if(n%i ==0  && isPrime(n/i)){
                int m = n;
                while(m%(n/i) ==0){
                     sum += (n/i);
                     m /= (n/i);
                 }                                                                          
            }                                                                                    
        } 
        if(sum ==n) return 4;
        // recursive call
        return smallestValue(sum); 
    
    }
    int main(){
     int n = 15;
     cout<<smallestValue(n);




    }
