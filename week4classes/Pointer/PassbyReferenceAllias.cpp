#include<iostream>
using namespace std;

void swap (int &x, int &y){
    int temp= x;
    x = y;
   y = temp;
    return;
}
int main(){
   int a =2, b =3;
   cin>>a>>b;
   swap(a, b);
   cout<<a<< " "<<b;
      

}