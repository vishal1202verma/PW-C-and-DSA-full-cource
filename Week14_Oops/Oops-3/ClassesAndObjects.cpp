#include<iostream>
using namespace std;
class player{
    private :
    int health;
    int age;
    int score;
    bool alive;

    public :
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    void setHealth(int health){
          this->health = health;
    }
    void setAge( int age){
          this->age = age;
    }
    void setScore(int score){
          this->score = score;
    }
    void setisalive( bool alive){
          this->alive = alive;
    }
};

int addScore(player a, player b){
       return a.getScore() + b.getScore();
}

// return type is the class's object of the function
player getMAxScore(player a, player b){
       if(a.getScore()> b.getScore()){
              return a;
       } 
       else{
        return b;
       }


}
int main (){
//  making a object
// staticly object creation
player vishal; // compile , static memry allocation
vishal.setHealth(100);
vishal.setAge(22);
vishal.setScore(264);
vishal.setisalive(true);

player Ragav; // compile , static memry allocation
Ragav.setHealth(99);
Ragav.setAge(28);
Ragav.setScore(100);
Ragav.setisalive(true);

cout<<addScore(vishal, Ragav )<<endl;
player sanket = getMAxScore(vishal , Ragav );
cout<<sanket.getScore()<<endl;

// Dynamic memory allocations
// it occures by using pointers for run time memory allocation 
player *shree = new player; // run time , dynamic memory allocation
shree->setScore(100);
shree->setHealth(101);
shree->setAge(20);

cout<<shree->getScore();








}