#include<iostream>
using namespace std;
int main (){
// ques WAP to pint the power of a eachother  number 

int a , b;
cout<<"enter a number :";
cin>>a;
cout<<"enter b number :";
cin>>b;
int power =1;
for (int i = 1; i <= b; i++)
{
    power*=a;
    
}
cout<<power;







}