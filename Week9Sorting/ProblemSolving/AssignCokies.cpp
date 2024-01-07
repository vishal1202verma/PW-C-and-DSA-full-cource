#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string g = {4,5,6,7,8};
int n = 5;
string s = {2,3,4,5,6};
sort(g.begin(), g.end());
sort(s.begin(), s.end());
int count =0;
int i=0;
int j=0;
while(i<g.size() && j<s.size()){
      if(s[j]>g[i]){
        count++;
        i++;
        j++;
      }
      else{
        j++;
      }

}
cout<<count;

}