#include<iostream>
using namespace std;
class student{// user defined data types
public:
 int health;
 int score;
 string name;
 
};
int main(){
student vishal;
vishal.health = 60;
vishal.score = 100;
vishal.name = "Rohit Sharma";
cout<<vishal.score; 

}