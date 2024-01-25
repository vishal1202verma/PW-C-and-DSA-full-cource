#include<iostream>
using namespace std;
int power(int a, int b){

    if(  b ==0 ) return 1;
    else{
        return a*power(a, b-1);
    }
}

int main (){
    cout<<"the power of b of a will be : ";
    cout<<power(3, 6);
       

}