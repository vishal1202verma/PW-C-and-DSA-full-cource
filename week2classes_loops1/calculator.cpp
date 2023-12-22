#include<iostream>
using namespace std;
int main(){
  
//   write a program to create a  calculator 
 
 int a, b;
 char ch;
 cout<<"enter the integer a:";
 cin>>a;
 cout<<"enter the integer b:";
 cin>>b;
 cout<<"enter operator";
 cin>>ch;
 switch (ch)
 {
 case '+':
    cout<<a+b;
    break;

 case '-':
    cout<<a-b;
    break;
    
 case '*':
    cout<<a*b;
    break;

 case '/':
    cout<<a/b;
    break;
          
 default:
    cout<<"invalid";
    break;
 }
    

 
}