#include<iostream>
using namespace std;
// function overriding

class A{
    public :
    int a_ka_public;

    void show (){
        cout<<"main A ka show hun "<<endl;
    }


};

class B :  public A{
    public :
    int b_ka_public; 

    void show(){
        cout<<"main b ka show hun"<<endl;
    }
};

class C :  public A{
    public :
    int c_ka_public;
};


int main (){
    // object A
 A a;
 a.show();   
 // object b
 B b;
 // now it is overraiding the function of A ny class B
 b.show();
                                            



}