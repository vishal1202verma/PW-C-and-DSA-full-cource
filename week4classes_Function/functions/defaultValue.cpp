#include<iostream>
using namespace std;
int fun(int x  , int y){
    return x+y;
  
}
int main(){
    int x;
    cout<<"enter the num of x :";
    cin>>x;
    int y;
    cout<<"enter the num of y :";
    cin>>y;
    cout<<fun(x, y);
}
