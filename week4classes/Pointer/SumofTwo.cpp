#include<iostream>
using namespace std;
int main(){

    // int x= 6;
    // int y= 7;
    // int *p1= &x;
    // int *p2 = &y;
    // int sum = *p1 +*p2;
    // cout<<sum;
    
    int x, y;
    int *p1= &x;
    int *p2= &y;
    cout<<"enter the first integer :";
    cin>>x;
    cout<<"enter the second integer :";
    cin>>y;
    int sum = *p1 + *p2;
    cout<< sum;
    
        
          

}