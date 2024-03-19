#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
// class creation 
class bike {
    public :
    static int noOfBikes; // this belongs to the class it doesnot depend upon  the object 
    int tyreSize;
    int engineSize;

    // costructor is called
    bike( int typreSize, int engineSize){
        this->tyreSize =tyreSize;
        this->engineSize = engineSize;

    }
    // void setNoOfBikes(int no){
    //   noOfBikes = no;
    //   noOfBikes++;
      
      
    //   }
    static void increaseNoOfBikes(){ // static function creation
          noOfBikes++;
    }

};

void print ( ){
    static int b = 10;
    cout<<b<<endl;
    b++;
}
int bike ::noOfBikes = 10; // globaly declaration of the static varaible of the class

int main (){
 print();
 print();
 print(); 
 bike honda(54, 220);
 bike bajaj(007, 250);
 honda.increaseNoOfBikes();                                          
 cout<<honda.noOfBikes<<endl;
 cout<<bajaj.noOfBikes<<endl;
 cout<<"written by vishal verma";


  
}