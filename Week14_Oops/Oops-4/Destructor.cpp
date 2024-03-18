#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
class Bike{ // class is creator 
     public :
     int tyreSize; // datatyeps 
     int engineSize; // datatypes

     Bike( int tyreSize, int engineSize){ // constructor creation 
    // values initilized
    this->tyreSize = tyreSize;
    this->engineSize = engineSize;
     cout<<"constructor is called"<<endl;

    }         
    // distructor is created
    ~Bike(){
        cout<<"destructor call hua hain"<<endl;
    } 

};

int main (){
Bike TVS( 5, 125);  // object creation // cunstructor call it is a hidden function // by default in compiler
Bike honda(3, 150);
Bike bajaj(8, 220);
Bike sujuki(9, 250);
cout<<TVS.tyreSize<<" "<<TVS.engineSize<<endl;
cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
cout<<sujuki.tyreSize<<" "<<bajaj.engineSize <<endl;
cout<<bajaj.tyreSize<<" "<<sujuki.engineSize<<endl;
    





}