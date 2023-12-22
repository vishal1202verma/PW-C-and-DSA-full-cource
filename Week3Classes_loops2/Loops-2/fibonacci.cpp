#include<iostream>
using namespace std;
int main (){
// ques WAP to pint fibonacii of a number 

int n;
cout<<"enter a number :";
cin>>n;

int a =1;
int b =2;
int sum =a+b;

for (int i = 1; i<=n-2; i++)
{
    sum = a+b;
    a = b;
    b= sum;
}
cout<<b;
 

}
