#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b; // a=3, b=8
    int temp = a;// temp =3
    a = b; // a = 8
    b = temp; // b = 3
    cout<<a<< " "<<b;

}
