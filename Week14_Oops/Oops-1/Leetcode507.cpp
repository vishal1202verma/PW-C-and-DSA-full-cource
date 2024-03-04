#include<iostream>
using namespace std;
 bool checkPerfectNumber(int num) {
        int factors = 1;
        int sum = 0;
         for(int i=1; i<num; i++){
             if(num%i ==0){
                // factors = i;
             sum += i;
             }
         }
         if(sum == num){
            cout<<true;
         }
         else{
             cout<<false;
         }
    }
    int main (){
    int  num = 28;
    checkPerfectNumber(num);




    }