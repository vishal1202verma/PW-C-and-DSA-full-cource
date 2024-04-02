#include<iostream>
#include<algorithm>
using namespace std;

class A{
    private :
    int a_ka_private = 10;

    public :
    friend void show( A &a);
};

void show(A &a){

    cout<<a.a_ka_private;
}

int main (){
A a;
// now we call friend function for properties of Base function
show( a);


}