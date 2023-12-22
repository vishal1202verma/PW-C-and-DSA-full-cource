#include<iostream>
using namespace std;
int main(){
    // int x = 23 ;
    // int y = 12;
    // int sum = x+y;
    //  cout<<sum;
    
// incement and decrement 

int x= 5;
cout<<x<<endl;
++x; //pre-inrement 
cout<<x<<endl;
x++; //post -increment
cout<<x<<endl;

//  float opratons
float p =23;
float q= 3;
cout<<p/q<<endl;

// modulator operator 

int r= 34;
int s =23;
// cout<<r%s<<endl;
cout<<s%r<<endl; //if s<r then remainder will be (s)

// calculate percentage of 5 subject
float x1 = 94;
float x2 = 95;
float x3 = 78;
float x4 = 85;
float x5 = 98;

float percentage = (x1+x2+x3+x4+x5)/5;
cout<<percentage<<endl;

// Area of circle
 float pi = 3.1415;
//  float radius = 5;
 float radius;
 cout<<"enter the value of radius :";
 cin>>  radius;
 float area = pi*radius*radius;
 cout<< "area of the circle is:"<<area<<endl;
 

// calculate the simple imtrest 
float principle = 1000;
float rate = 234;
float intrest =23;
float si = (principle*rate*intrest)/1000;
cout<<si<<endl; 

}