#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void Permutaion( string ans, string original ){
       if(original == ""){
          for(int i=0; i<ans.size(); i++){
              cout<<ans[i];
    
            }
            cout<<endl;
       }
        for(int i=0; i<original.size(); i++){
          char ch = original[i];
          string left = original.substr(0,i);
          string right = original.substr(i+1);
          Permutaion(ans+ch, left+right); 

        }

}

int main (){
string str  = "abc";
string s ="";
vector<string>v;
Permutaion("", str);

// c ka idx 2, string length = 5 (0-4);
// string left = str.substr(0, 2);
// cout<<left<<endl;
// string right = str.substr(2+1);
// cout<<right;

}