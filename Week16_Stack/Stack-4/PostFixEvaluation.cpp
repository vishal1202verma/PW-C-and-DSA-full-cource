#include<iostream>
#include<stack>
#include<string>
using namespace std;

int solve( int v1, int v2, int ch){
      if( ch == '+') return v1+v2;
      else if ( ch == '-') return v1-v2;
      else if( ch == '*') return v1*v2;
      else return v1/v2; 
}
int main (){
    
    // now we will solve this string by using two Stacks 
    string s = "79+4*8/3-"; // answer will be = 264*8/+3-
    stack<int>val;
    for( int i=0; i<s.length(); i++){
          // check if s[i] is digit
        int ascii = (int)s[i];
        if(s[i]>=48 && s[i]<=57){ // digit ( 0 - 9) asci val is ( 48 - 57)
            val.push((s[i]-48));
        }           
        else{  // not digit
                    // i have to do val1 opr val2
                    int val2 = val.top();
                    val.pop();
                    int val1= val.top();
                    val.pop();
                    int ans = solve( val1, val2, s[i]);
                    val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;



}