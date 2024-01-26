#include<iostream>
using namespace std;
int fab(int n ){
   if( n==1 || n==2 ) return 1;
   else return fab(n-1) + fab(n-2); // multiple call of fab function 

}
int main (){
   // 1 1 2 3 5 8 13 21 
    cout<<"this is the value  of index of fibonacii series :"<<fab(13);
    
    
}