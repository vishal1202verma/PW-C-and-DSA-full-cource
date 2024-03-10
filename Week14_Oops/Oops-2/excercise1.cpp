#include<iostream>
using namespace std;
// creating a class book 
class book{
  public :  
  string name;
  int price;
  int NoPages;
   // member functions
   int countBooks( int p){
       if(price<p) return 1;
       else return 0;
   }  

   bool isBookPresent( string title){
        if ( title == name){
            return true;
        }
        else{
            return false;
        }
   }

};

int main (){
book harryPoter;
harryPoter.name = "H";
harryPoter.price = 100;
harryPoter.NoPages = 500;
cout<<harryPoter.countBooks(787)<<endl;
cout<<harryPoter.isBookPresent("H");








}