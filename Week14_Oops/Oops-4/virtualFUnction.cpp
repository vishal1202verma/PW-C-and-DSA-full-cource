#include<iostream>
#include<algorithm>
using namespace std;

 class vehical {
   public :
   int tyreSize;
   int engineSize;

   virtual  void show(){
    cout<<"vehical ka show"<<endl;
   }

 };

 class bike : public vehical{
    public :

    int tyreSize;
    virtual void show (){
        cout<<"bike ka show "<<endl;
    }

 };

int main (){
  // bike ka object  
  bike b;
  b.show();
 // vehical ka object
  vehical v;
  v.show();
  
  // vehical pointer creation
  vehical *v1;
  v1 = &b;
  v1->show(); // v1 ponters show called
  cout<<"vishalvermaji";
            

}
