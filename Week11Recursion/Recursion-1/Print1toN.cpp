#include<iostream>
using namespace std;
void print(int i, int n){
       if(i>n) return ; 
       cout<<i<<" ";
       print(i+1, n);
        
}

int main (){
int n ;
cout<<"enter any inetegr n :";
cin>>n;
cout<<endl;
print(1, n);




}