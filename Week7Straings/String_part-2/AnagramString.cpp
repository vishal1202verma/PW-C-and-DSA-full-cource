#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 string s = "vishalverma";
 string t= "visverhalma";
 sort(s.begin(), s.end());
 sort(t.begin(), t.end());
 if(s==t){
    cout<<true;
 }
 else{
    cout<<false;
 }
   
}