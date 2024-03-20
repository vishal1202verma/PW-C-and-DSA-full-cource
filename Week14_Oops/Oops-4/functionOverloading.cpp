#include<iostream>
#include<algorithm>
using namespace std;

void add ( int a , int b){
     cout<<a+b<<endl;
}
// function overlaoding  same function name but different parameters
void add( int a){
     cout<<10+a<<endl;
}

int main (){
  add(20, 5);
  add(20);

}


