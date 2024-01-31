#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
 void StoreSubset(string ans, string original, vector<string> &v, bool flag){
          if(original == ""){
            v.push_back(ans);
            return;
          }
          char ch = original[0];
          if(original.length() == 1){
          if(flag == true) StoreSubset(ans+ch, original.substr(1), v, true);
          StoreSubset(ans, original.substr(1), v, true);
          return; // takki neeche ki do condition na chale 
          }
          char dh = original[1];
           if(ch == dh){
            if(flag == true)  StoreSubset(ans+ch, original.substr(1), v, true);
              StoreSubset(ans, original.substr(1), v, false);
          }
          else{
             if(flag == true) StoreSubset(ans+ch, original.substr(1), v, true);
                StoreSubset(ans, original.substr(1), v, true);
          }
 }

int main (){
string str = "aba";
string s = "";
vector<string>v;
sort(str.begin(), str.end());
StoreSubset("", str, v, true);
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;

}



}