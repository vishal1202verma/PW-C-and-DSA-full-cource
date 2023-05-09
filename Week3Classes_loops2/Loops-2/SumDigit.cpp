#include<iostream>
using namespace std;
int main (){

// ques WAP to print sum of digits of a given number 

int n;
cout<<"enter any number :";
cin>>n;

int lastDigit =0;
int sum =0;
 while (n>0)
 {
  int lastDigit = n%10;
  sum += lastDigit;
  n/=10;
 }
 cout<<sum;

    
}