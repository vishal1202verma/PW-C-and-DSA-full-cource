#include<iostream>
#include<stack>
#include<string>
using namespace std;

string solve( string v1, string v2, char ch){
     string s = "";
     s.push_back(ch);
     s += v1;
     s += v2;
     return s;
     
} 
int main (){
    
    // now we will solve this string by using two Stacks 
    string s = "79+4*8/3-"; // answer will be = -/*+79483

    stack<string>val;
    for( int i=0; i<s.length(); i++){
          // check if s[i] is digit
        int ascii = (int)s[i];
        if(s[i]>=48 && s[i]<=57){ // digit ( 0 - 9) asci val is ( 48 - 57)
            val.push(to_string(s[i]-48));
        }           
        else{  // not digit
                    // i have to do val1 opr val2
                    string val2 = val.top();
                    val.pop();
                    string val1= val.top();
                    val.pop();
                    string ans = solve( val1, val2, s[i]);
                    val.push(ans);
        }
    }
    cout<<val.top()<<endl;
   


}