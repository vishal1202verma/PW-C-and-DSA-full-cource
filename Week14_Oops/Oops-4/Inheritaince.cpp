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
       cout<<"show the company name";
                                                          
              
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
    private :
               

};

class B{
   private :


};

int main (){
    Bike honda;
    honda.handleSize = 5;
    honda.engineSize = 220;
    honda.lights = 500;
    honda.companyName = "Splender";
    cout<<honda.companyName<<endl;
    cout<<honda.handleSize<<endl;
    cout<<honda.lights<<endl;
    honda.showCompany();
     
}