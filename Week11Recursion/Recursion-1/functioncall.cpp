#include<iostream>
using namespace std;
void greed(){
    cout<<"how are you !"<<endl;

}
int product(int a, int b){
    return a*b; // return means function kahatam 
}

int main (){

int a = 5;
int b = 4;
greed();
cout<<endl;
swap(a, b);
cout<<"the product of these two numbers is :"<<product(a ,b);// calling the function


}