#include<iostream>
using namespace std;
class player{// user defined data types class is a blueprint 
public:
 int score;  // data members 
 string name;
 void showHealth(){
    cout<<"Health is good"<<endl;
 }
 private :
 int health; 
 
};
class calculator{
    public :
    int a;
    int b;
    void add (int a, int b){ // member functions 
        cout<<a+b<<endl;

    }
    void Sub ( int a, int b){ // member functions 'ppl
        cout<<a-b<<endl;
    }

};
int main(){
player vishal;
vishal.score = 100;
vishal.name = "Rohit Sharma";
cout<<vishal.score<<endl; 
cout<<vishal.name<<endl;
vishal.showHealth();

calculator calucl;
calucl.add(3, 5);
calucl.Sub(8, 3);


}