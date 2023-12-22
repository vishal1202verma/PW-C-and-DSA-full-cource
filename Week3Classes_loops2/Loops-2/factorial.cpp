#include<iostream>
using namespace std;
int main (){
// ques WAP to pint factorial of a number 
int m;
int n;
cout<<"enter a number :";
cin>>n;
int product =1;


for (int  i = 1; i<=n; i++)
{
    product *=i;

}
cout<<product;
return 0;

}