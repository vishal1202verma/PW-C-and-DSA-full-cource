#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class  Bike{
    public :

    int tyreSize; // datatypes
    int engineSize;  // datatypes

    // constructor overloading 
    Bike ( int ts, int es ) : tyreSize(ts) , engineSize( es){
    } 
    Bike( int ds) : tyreSize(ds), engineSize(100){
    }
    Bike () : tyreSize(12) , engineSize(120){}
                   


};

int main (){
   Bike honda(23, 220);
   cout<<honda.engineSize<<endl;
    



}