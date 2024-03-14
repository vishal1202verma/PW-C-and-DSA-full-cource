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

cout<<vishal.score;
   
}