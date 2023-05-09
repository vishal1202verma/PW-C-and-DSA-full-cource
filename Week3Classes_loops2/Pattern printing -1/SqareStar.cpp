#include<iostream>
using namespace std;
int main (){
int n;
// int m;
cout<<"enter the numbers of rows:";
cin>>n;
// cout<<"enetr the numbers of columns:";
// cin>>m;

// by using nested loops 
for (int i = 1; i<=n; i++)
{
   for (int j=1; j<=n; j++)
   {
   cout<<"*";
   }
   cout<<endl;
}


}