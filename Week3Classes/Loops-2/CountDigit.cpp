#include<iostream>
using namespace std;
int main (){

// ques WAP to count digits of a given number
int n;
cout<<"enter any integer number :";
cin>>n;
int count = 0;
while (n>0)
{
    n/=10;   
    count++;

}
cout <<"digit of entered integer number is :"<<count<<endl;



}