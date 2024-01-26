#include<iostream>
using namespace std;
int Power(int x, int n  ){
   if(n==1) return x;
   int ans =Power(x, n/2);
   return ans*ans;    

}
int main (){
   // 1 1 2 3 5 8 13 21 
    cout<<"this is powwer of n of the x : "<<Power(2, 4);
    
    
}