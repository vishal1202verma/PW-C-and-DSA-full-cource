#include<iostream>
using namespace std;

// before undertstand the absratct class let us study about the Pure Virtual Class
class vehical { // abstract class 
   public :
   int tyreSize;
   int engineSize;

   virtual  void calculaMileage() =0 ; // pure virtual function
   virtual void refule()  = 0;

    
 };

 class bike : public vehical{
    public :

    int tyreSize;
    virtual void calculaMileage(){
        cout<<"bike ka show "<<endl;
    }
    virtual void refule(){
        cout<<"refule function";
    }

 };

int main (){
  // bike ka object  
   bike b;
   b.calculaMileage();
 // vehical ka object
 
            

}
