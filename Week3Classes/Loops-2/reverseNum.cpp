#include<iostream>
using namespace std;
int main (){
// ques WAP to pint reverse of a number 

int n;
cout<<"enter a number :";
cin>>n;
int lastDigit = 0;
int reverseNum =0;

while (n>0)
{
    lastDigit = n%10;
    reverseNum*=10;
    reverseNum +=lastDigit;
     n/=10;
}

cout<<reverseNum<<endl;



}