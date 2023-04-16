#include<iostream>
using namespace std;
int main(){
//    print a number is composite number or not 
//   ques print num is prime or not 
    int n ;
    cout<<"Enter a Name :";
    cin>>n;
    bool flag = true; // true means prime number
     for (int i = 2; i <n-1; i++)
     {
      if (n%i == 0)// i is a factor of n
      {
       flag = false;// flase mean s composite
        break;
      }
      
      
     }
     if(n==1)cout<<"n is not prime nor composite";
     else if (flag == true)
     {
       cout<<"n is prime";
     }
     else{
        cout<<"n is composite";
     }
     
      
         
      

     
     

}



