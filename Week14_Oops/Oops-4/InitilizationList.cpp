#include<iostream>
#include<algorithm>
using namespace std;

class student{
    public :

    int rollNumber;
    int age;

    // construction initilaization

    student( int r, int a) : rollNumber(r) , age(a){

    }



};

int main (){
    student vishal( 34, 22);
    student ayush(10, 20);
    cout<<vishal.rollNumber<<endl;
    cout<<vishal.age<<endl;
    cout<<ayush.rollNumber<<endl;
    cout<<ayush.age<<endl;
    
    

}