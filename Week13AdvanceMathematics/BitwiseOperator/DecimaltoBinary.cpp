#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string result = "";
       while(num>0){
         if(num%2 ==0){
            // even
            result = '0' + result;
         }
         else{
            // odd
            result = '1' + result;
         }
         num = num/2; // it will give quetient remaing number
       }
    return result;
    
    



}
int main (){
int number = 18;
cout<<decimal_to_binary(number);



}