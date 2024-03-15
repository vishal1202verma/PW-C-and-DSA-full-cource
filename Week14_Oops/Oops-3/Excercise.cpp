#include<iostream>
using namespace std;

class cricketer {
   private :
   string name;
   int age;
   int NotestMatches;
   int AvgScore;

   public :
   string getNameofGreatplayer( ){
        return  name; 
   }

   int getAge(){
    return age;
   }
   
   int getNotestMatches(){
    return  NotestMatches;

   }
   int getAvgScores(){
     return AvgScore;
   }
   void setName( string name){
        this->name = name;

   }

   void setAge( int age){
      this->age = age;
   }

   void setNotestMatches( int NotestMatches){
     this->NotestMatches = NotestMatches;
   }
   
   void setAvgScore( int AvgScore){
         this->AvgScore = AvgScore;
   } 
};

int main (){
cricketer indianTeam;
indianTeam.setName( "Rohit Sharma");
indianTeam.setAge(35);
indianTeam.setNotestMatches(100);
indianTeam.setAvgScore(60);


cout<<indianTeam.getNameofGreatplayer();



}