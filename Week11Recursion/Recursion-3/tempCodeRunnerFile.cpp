#include<iostream>
#include<climits>
using namespace std;
int main (){
    string str = "Vishal Verma ";
    string s = " ";
    for(int i=0; i<str.size(); i++){
        if(str[i] != 'a'){
            s = s+str[i];
        }
    }
    cout<<s;

}