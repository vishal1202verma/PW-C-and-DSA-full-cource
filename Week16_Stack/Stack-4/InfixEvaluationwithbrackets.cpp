#include<iostream>
#include<stack>
#include<string>
using namespace std;

int priority( char ch){
  if( ch == '+' || ch == '-') return 1;
  else return 2; // *, /
  
}
int solve( int v1, int v2, int ch){
      if( ch == '+') return v1+v2;
      else if ( ch == '-') return v1-v2;
      else if( ch == '*') return v1*v2;
      else return v1/v2; 
}
int main (){
    
    // now we will solve this string by using two Stacks 
    string s = "1+(2+6)*4/2-3"; // answer = 14
    stack<int>val;
    stack<char>opr;
    for( int i=0; i<s.length(); i++){
          // check if s[i] is digit
        int ascii = (int)s[i];
        if(s[i]>=48 && s[i]<=57){ // digit ( 0 - 9) asci val is ( 48 - 57)
            val.push(s[i]-48);
                    
        }
        else { // not digit
             if(opr.size() ==0) opr.push(s[i]);
             else if (s[i] == '(') opr.push(s[i]);
             else if ( opr.top() == '(') opr.push(s[i]);
             else if (s[i] == ')'){
                 while( opr.top() != '('){ // hame kamm karna hain solve karne ka 
                    char ch = opr.top(); // ( * , / > + , - )
                    opr.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1= val.top();
                    val.pop();
                    int ans = solve( val1, val2, ch);
                    val.push(ans);


                 }
                 opr.pop(); // opening brackets ko udha do
             }
             else if(priority(s[i]) > priority(opr.top())){
                   opr.push(s[i]);
             }
             
             else{ // work karna hain if priority(s[i]) <= priority[opr.top()
                while(opr.size()>0 && priority(s[i]) <= priority(opr.top())){
                    // i have to do val1 opr val2
                    char ch = opr.top(); // ( * , / > + , - )
                    opr.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1= val.top();
                    val.pop();
                    int ans = solve( val1, val2, ch);
                    val.push(ans);

                }
                opr.push(s[i]);

             }
        }

    }
    // if the operator stack can have still some values
    // so make it work
        while(opr.size()>0 ){
            // i have to do val1 opr val2
            char ch = opr.top(); // ( * , / > + , - )
            opr.pop();
            int val2 = val.top();
            val.pop();
            int val1= val.top();
            val.pop();
            int ans = solve( val1, val2, ch);
            val.push(ans);

        }
   cout<<val.top(); // val top will give us the answer



}