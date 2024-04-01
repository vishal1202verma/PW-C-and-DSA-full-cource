#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class vehical{
    public :
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    // fuction member of the class 
    void showCompany(){
       cout<<"show the company name :";
                                                            
    }

    // vehical constructor 
    vehical (){
        cout<<"Vehical constructor call huna hain"<<endl;
    }
         
};
// Inheritance of vehical class OR child of vehical
class Car : public vehical {    
    public :
    int steeringSize;

};
// Inheritance of vehical class OR child of vehical
class Bike : public vehical{
  public :
    int handleSize;
    // constructor of bike class 
    Bike(){
        cout<<"bike ka constructor call ho raha hain"<<endl;
    }
    
};

class A{
    private : // private can not be acced and canot be inherited
    int a_ka_private;

    protected: // protected canot be acced bu can inherited
    int a_ka_protected;

    public : // can be accessed and inherited
     int a_ka_public;              

};

class B : public A { // B is the child of the A class
   public :
   int b_ka_public;

//    protected :
//    int b_ka_protected;

//    private :
//    int b_ka_private;

};

class c : public B{ 
    public :
    int c_ka_public ;

    void showC(){
        cout<<"b_ka_public";
    }

};


int main (){
    Bike honda;
    A a;
    B b;
    honda.handleSize = 5;
    honda.engineSize = 220;
    honda.lights = 500;
    honda.companyName = "Splender";
    honda.tyreSize = 230;
    
    cout<<honda.companyName<<endl;
    cout<<honda.handleSize<<endl;
    cout<<honda.lights<<endl;
    honda.showCompany();
    cout<<endl;
    cout<<honda.tyreSize<<endl;   
    cout<<"vishal verma ji now facing resistance from myself to work bu now i will do my work with more focus and dedication";
    // success is your duty !
    


}    