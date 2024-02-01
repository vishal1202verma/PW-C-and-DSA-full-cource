#include<iostream>
using namespace std;
int HCF( int a, int b){
    // for(int i=min(a, b); i>=2; i--){      // T.C. = O(min(a,b))
    //    if(a%i == 0 && b%i == 0){
    //        return i;
    //    }
    // }
    //  return 1;

    // Recursive Solution
   if(a==0) return b;
   else return HCF(b%a,a);

}
int main (){
 int a = 27;
 int b = 45;
 cout<<"the highest common factor of these two numbers is : "<<HCF(a, b);
 
}