#include<iostream>
using namespace std;
int main (){
int n;
int m;
cout<<"enter the number of rows :";
cin>>n;
cout<<"enter the number of columns :";
cin>>m;
for(int i=1; i<=n; i++){
   
   for(int j=1; j<=n; j++ ){
      cout<<"*";
   }
   cout<<endl;
}



}