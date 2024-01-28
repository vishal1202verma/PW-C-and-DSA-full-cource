#include<iostream>
using namespace std;

void ZigZag(int n){
    if(n==0) return;
    cout<<n;
    ZigZag(n-1);
    cout<<n;
    ZigZag(n-1);
    cout<<n;
    
}
int main (){
    int n ;
    cout<<"enter the any number : ";
    cin>>n;
    cout<<"the ZigZag pattern is here : -->";
    ZigZag(n);
}
