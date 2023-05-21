#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

// int n;
// cout<<"enter any even integer :";
// cin>>n;
string s;
getline(cin, s);
int n = s.length();
reverse(s.begin(), s.begin()+n/2);
cout<<s;






}