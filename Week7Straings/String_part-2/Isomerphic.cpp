#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s = "paper";
    string t = "title";
    if(s.length() != t.length()) cout<<false;
    vector<int>v(150, 1000);
    for(int i= 0; i<s.length(); i++){
    int idx = (int)s[i];
    v[idx] = s[i] - t[i];
    if(v[idx] ==1000) v[idx] = s[i] - t[i];
    }
    // emptying the vector
    for(int i=0; i<150; i++){
        v[i] =1000;
        for(int i=0; i<s.length(); i++){
            int idx = (int) t[i];
            if(v[idx] ==1000) v[idx] = t[i]- s[i];
            else if(v[idx] != (t[i]- s[i])) cout<<false;
        }
    }
    cout<<true;
    
}