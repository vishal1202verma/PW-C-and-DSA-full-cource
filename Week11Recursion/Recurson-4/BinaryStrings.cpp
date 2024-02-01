#include<iostream>
#include<vector>
using namespace std;
void generate(string s, int n){
  if(s.length() ==n) {
        cout<<s<<endl;
        return;
  }
   generate(s+'0', n);
  if( s.length() == '0'){
        generate(s+'1', n);
  }
  else if (s[s.length()-1] == '0'){
         generate(s+'1', n);
  }
  return;

}
int main (){
string s = "";
int n = 4;
generate( "", n);




}