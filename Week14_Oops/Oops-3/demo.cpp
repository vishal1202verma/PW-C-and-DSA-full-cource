#include<iostream>
using namespace std;
class player{
    public :
     int ID;
     int score;
     string name;


};

int main (){
player playerData;
playerData.ID = 45;
playerData.score = 100;
playerData.name = "Rohit Sharma";
cout<<playerData.name;




}