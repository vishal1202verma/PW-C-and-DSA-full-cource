#include<iostream>
using namespace std;
int main(){

// ternary operator   
 int x;
 cin>>x;
 (x%2==0) ? cout<<"even" : cout<<"odd";

//  ques no 2

int mark;
cout<<"enter marks";
cin>>mark;
// condition ? true : false
(mark>=33) ?  cout<<"pass" : cout<<"fail";
cout<<endl;

// ternary operator spplies rigth to left 

                //    Switch Statement 

  int days;
  cout<<"enter any day number :";
  cin>>days;
  switch (days)
  {
  case  1:
    cout<<"monday";
    break;
  
  case  2:
    cout<<"tuesday";
    break;

    case  3:
    cout<<"wednesday";
    break;
 
    case  4:
    cout<<"thursday";
    break;

    case  5:
    cout<<"friday";
    break;

    case  6:
    cout<<"saturday";
    break;

    case  7:
    cout<<"Sunday";
    break;

  default:
  cout<<"invalid";
    break;
  }

  
    
}