#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 bool isPalindrom(string s, int i, int j){
    // int i=0;
    // int j= s.size()-1;
    // while(i<j){
    //     if(s[i] !=s[j]) return false;
    //     i++;
    //     j--;

    // }
    // return  true;
    // recursive call 
    if(i >j) return true;
    if(s[i] !=s[j]) return false;
    else return isPalindrom(s, i+1, j-1);
 }

 int main (){
 string s = "mom";
 cout<<isPalindrom(s, 0, s.length()-1);



 }