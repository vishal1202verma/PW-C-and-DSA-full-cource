#include<iostream>
using namespace std;
bool isUgly(int n) {
        if (n==0) cout<<false;
        while( n% 2==0) n/=2;
        while( n% 3 ==0) n/=3;
        while( n%5 ==0) n/=5;
        if( n==1) cout<< true;
        else cout<< false;
    }

int main (){
int n;
isUgly(4);

}