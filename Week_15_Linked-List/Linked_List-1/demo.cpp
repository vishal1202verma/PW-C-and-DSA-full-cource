#include<iostream>
using namespace std;

class student{ // user defind datatype
public:

string name;
int ro;
float per;
student(string n, int m, float p){
     name = n;
     ro = m;
     per = p;
}

};

int main (){
// declaration with initilaition
student s("vishal verma", 136, 80.16);
// s.name = "vishal verma";
// s.ro = 136;
// s.per = 80.16;
cout<<s.name;



}