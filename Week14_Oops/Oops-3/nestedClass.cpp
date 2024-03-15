#include<iostream>
using namespace std;
class player{
    public :
    int health;
    int age;
    int score;
    bool alive;

      class Gun{
      public :
        int ammo;
        int damage;
        int scope;
      };
  
};
int main (){
player vishal;
vishal.age = 50;
vishal.alive = true;
vishal.health = 100;
vishal.score = 264;

cout<<vishal.score<<endl;
cout<<"you can pass any of them parameter"<<endl;

// katta khop denge tumahre khapar ma ayea na hamra bihar ma  
// Ayeana na hamra bihar ma 
// static memeory allocation and dynamic allocation of memory
/// Run time memory and it is make by using pointers 

int a = 10;
int *b = &a; // b stores the address of a
cout<<a<<" "<<b;






}