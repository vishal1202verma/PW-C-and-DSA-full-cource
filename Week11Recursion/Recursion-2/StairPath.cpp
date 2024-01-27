#include<iostream>
using namespace std;
int stair(int n){
if(n==1) return 1;
if( n==2 ) return 2;
// if(n==3) return 3;
else{
    return stair(n-1) + stair(n-2);
}
 }

int main (){
  cout<<stair(5);


}
