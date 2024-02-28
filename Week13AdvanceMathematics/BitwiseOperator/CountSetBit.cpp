#include<iostream>
#include<algorithm>
#include<popcntintrin.h>
using namespace std;
int main (){
int n;
cout<<"Enter any integer :";
cin>>n;
// int ans = __builtin_popcount(n);
// cout<<ans;
int count =0;
while(n>0){   // this is Brain kernilinges algorithm
  count++;
  n = n & (n-1);

}
cout<<count;

}