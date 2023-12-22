#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   
// ques no-1 number is three digit or not
cout<<"enter any number :";
int n;
cin>>n;
if( n>=100 && n<=999){
   cout<<"entered number is three digit"<<endl;
}
else{
   cout<<"entered number is not three digit"<<endl;
}

// Ques No-2 // take 3 positive int input and print the greatest of them 
 int a, b, c;
 cout<<"enter the integer a:";
 cin>>a;
 cout<<"enter the integer b:";
 cin>>b;
 cout<<"enter the integer c:";
 cin>>c;
 if(a>b && a>c){
    cout<<a<<endl;
    
 }
 if (a<b && b>c  )
 {
    cout<<b<<endl;

 }
 if (a<b && b<c)
 {
    cout<<c<<endl;
 }
   

// ques no 3 write a program to check wheather a char is an alphabet or not

char ch;
cout<<"enter the character:";
cin>>ch;
int ascii  = (int)ch;
if( ascii == 97 || 101 && ascii == 105 || 111 && ascii == 117){
   cout<<"character is vowel"<<endl;
}
else {
   cout<<"character is constant"<<endl;
}


// nested if-else 
// Take positive  integer input and tell if it is divisible by 5 or 3 but not divisible by 15

int num ;
// cout<< "enter any integer number :";
// cin>>num;
// if ( (num%5 == 0 || num%3 == 0) && num%15!= 0){
//    cout<<"number is divisible by 5 or 3 but not divisible by 15"<<endl;   
// }
// else{
//    cout<<"not matching the condition"<<endl;
// }
 
//  by nested ef else 
 if (num%5 ==0 || num%3 == 0){
       if(num%15!= 0){
         cout<<"number is divisible by 5 or 3 but not divisible by 15";
       }
       else{
         cout<<"not matching the condition";
       }
 }
else{
   cout<<"not matching the condition";
}

// else if questions 
//ques no 6 take input marks of a student and print the grade acoording to marks

// int marks ;
// cout<<"ënter students's marks";
// cin>> marks;
// if(marks>=91 && marks<=100){
//    cout<<"Excellent";
// }
// if(marks>=81 && marks<=90){
//    cout<<"very good";
// }
// if(marks>= 71 && marks<= 80){
//    cout<<"Good";
// }
// if (marks>= 61 && marks<=70)
// {
//    cout<<"Can do better";
// }


int mark;
 if(mark>91){
   cout<<"Excellent";
 }
 else{
   if (mark>=81)
   {
      cout<<"very good ";
   }
   else{
      if(mark>=71){
         cout<<"Good";
      }
      else{
         if(mark >=61){
            cout<<"Can do better";
         }
         else{
            if(mark>=51){
               cout<<"Average";
            }
            else{
               if(mark>=41){
                 cout<<"Below Average";
               }
               else{
                  if(mark>=31){
                     cout<<"Fail";
                  }
               }
            }
         }
      }
   }
   
 }


}
