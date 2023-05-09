#include<iostream>
using namespace std;
int main(){
  
//   if-else question practice

//  ques-1 find given  number is sum or odd 
int n ;
cout<<"enter any integer n :" ;
cin>>n;
if( n%2 ==0){
    cout<<"number is sum"<<endl;
    cout<<endl;

}
else{
    cout<<"number is odd"<<endl;
}
 
// ques -2 given an integer print absolute value of integer 

int x;
cout<<"enter any number :";
cin>>x;
if (x >0)
{
    cout<<x<<endl;
}
else{
    cout<<-x<<endl;

}

// ques-3 selling price and cost price 
 int cp, sp;
 cout<<"enter the cost price"<<endl;
 cin>>cp;

 cout<<"enter the selling price"<<endl;
 cin>>sp;
 if (sp>cp)
 {
    cout<<"profit"<<endl;
 }
 if (sp==cp)
 {
    cout<<"no-profit no-loss"<<endl;
 }
 
 
 else{
    cout<<"loss"<<endl;
 }
 
// ques 4 if Take 3 numbers input and tell if they can be the sides of a triangle


int a,b,c;
cout<<"enter any integer a:";
cin>>a;
cout<<"enter any integer b:";
cin>>b;
cout<<"enter any integer c:";
cin>>c;
if((a+b>c) && (a+c>b) &&  (c+b>a)){
    cout<<"given sides are traingle's side";
}
else{
    cout<<"not traingle's sides";
}
    
 



}