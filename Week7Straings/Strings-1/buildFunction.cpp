#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// lenth()
// string str = "vishal is good programmer ";
// cout<<str.length();

// push_back
string str = "äbcd";
str.push_back('e');
cout<<str;
// pop_back
// str.pop_back('a');

// + opetrator 
string s = "abc";
string t  = "def";
string r = s + t;
cout<<r;    
cout<<endl;


// reverse 
string s= "abcdegf";
reverse(s.begin(), s.end());
// rverse by desired index
reverse(s.begin()+2, s.end()-1);




}