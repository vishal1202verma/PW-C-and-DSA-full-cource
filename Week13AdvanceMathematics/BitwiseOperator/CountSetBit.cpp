#include<iostream>
#include<algorithm>
#include<popcntintrin.h>
using namespace std;
int main (){
int n = 5; // 101
int ans = __builtin_popcount(n);
cout<<ans;


}