#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// even string
    string s;
    cout<<"enetr the string :";
    getline(cin, s);
    int n = s.length();
    // reverse(s.begin(), s.begin() +n/2 );
    cout<<s.substr(n/2)<<endl;
        
    




}