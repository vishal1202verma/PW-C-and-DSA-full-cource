#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main (){
   stack<char> st;
   string s = "aaabbcddaabffg";
   st.push(s[0]);
   for( int i=1; i<s.length(); i++ ){
         if( s[i] != st.top()){
             st.push(s[i]);
         }
         
   }
   string ans = "";
   while( st.size()>0){
      ans += st.top();
      st.pop();
   }
   // printing the answer string
   for( int i=ans.size(); i>0; i--){
     cout<<ans[i];
   } 
    
}
    