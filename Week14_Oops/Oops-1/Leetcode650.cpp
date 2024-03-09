// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

// Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.
#include<iostream>
using namespace std;
int gd(int n){
        for(int i = n/2; i>=1; i--){
            if(n%i ==0) return i;
        }
        return 1;
    }
    int minSteps(int n) {
        int count = 0;
        // for (int i = 2; i <= n; i++) {
        //     while (n % i == 0) { // it will gives the factors 
        //         count += i;
        //         n /= i;
        //     }
        // }
        // return count;
        while(n>1){
            int hf = gd(n);
            count += (n/hf);
            n = hf;
        }
        return count ;
    }
int main (){
int n;
cout<<"Enter the any integer number :";
cin>>n;
cout<<minSteps(n);



}