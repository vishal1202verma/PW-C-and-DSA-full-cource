#include<iostream>
using namespace std;
int sum(int n ){
    // base condition
    if( n==0) 
    {return 0;}
    int ans = n + sum(n-1);
    return ans;
}
int main (){
int n ;
cout<<"enter any inetegr n :";
cin>>n;
cout<< sum( n );



}