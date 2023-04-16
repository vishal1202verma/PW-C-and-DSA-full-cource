#include<iostream>
using namespace std;
int main (){
// ques WAP to pint factorial of a number 

int n;
cout<<"enter a number :";
cin>>n;
int product =1;
int i;

for (int  i = 1; i<=n; i++)
{
    product *=i;

}
cout<<product;

}