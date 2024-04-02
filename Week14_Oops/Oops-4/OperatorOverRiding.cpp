#include<iostream>
#include<algorithm>
using namespace std;

class complexNumber{
public :
   int real;
   int imaginary;

   complexNumber add(complexNumber &c1 ){
        complexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;

   }
   // Operator Overlaoding 
   complexNumber  operator + ( complexNumber & c1){
        complexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;

   }

};


int main (){
complexNumber a1, a2; // a1 and a2 are the objects of the class comlexNumber
a1.imaginary = 10;
a1.real = 20;
a2.imaginary = 30;
a2.real = 15;

complexNumber a3; // now we want add two complexNumbers a1 and a2 into a3
// a3.imaginary = a1.imaginary + a2.imaginary;
// a3.real = a1.real + a2.real;

// by using function we wil add two complex number
 a3 = a1.add( a2);
cout<<endl; 
// now we will add teo complex number by using Operator Overloading 
 a3 = a1 + a2;


cout<<"Real part :"<<a3.real<<" "<<"Imaginary part :"<<a3.imaginary;





}