#include<iostream>
using namespace std;

class bike{
   public :
   int no;
   int engine;

   // Copy Constructor 
   bike( bike &b){
      cout<< "copy construction is called";
   }


};

int main (){
   bike b1();
   bike b2();
   b2() = b1(); // Sallow Copy 

   // now we will make a Copy Constructor for Deep Copy
//    bike b3 =  b2; //  deep coypy
   

  
}

