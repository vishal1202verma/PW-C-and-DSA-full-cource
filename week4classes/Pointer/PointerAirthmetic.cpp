#include<iostream>
using namespace std;
int main(){
   int x =2;
   int* ptr = &x;
   cout<<ptr<<endl;
   ptr++;
   cout<<ptr<<endl;
              
   bool a = 2;
   bool *p = &a;
   (*p)++;
   cout<<p<<endl;
  
  

}