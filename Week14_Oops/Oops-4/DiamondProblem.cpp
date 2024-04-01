// When 2 instances of base classes are present in the derived class.
// B derives A, C derives A and D derives B+C.
// Now D has 2 instances of A
#include<iostream>
using namespace std;

class A{
    public :
    int a_ka_public;

};

class B :  virtual public A{
    public :
    int b_ka_public; 
};

class C : virtual public A{
    public :
    int c_ka_public;
};

class D : public B, public C {
  public :
  int d_ka_public;
   
   void show(){
       cout<<a_ka_public;

   }


};

int main (){
  D d;
  d.a_ka_public = 10;
  d.show();

}




