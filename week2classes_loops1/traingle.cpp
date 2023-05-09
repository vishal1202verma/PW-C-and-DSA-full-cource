#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter int a:";
    cin>>a;
    cout<<"enter int b:";
    cin>>b;
    cout<<"enter int c:";
    cin>>c;
    if((a+c>b) || (a+b>c) ||(c+b>a)){
        cout<<"given inte is trainle";
    }
    else{
        cout<<"invalid";
    }
    
    return 0;

}