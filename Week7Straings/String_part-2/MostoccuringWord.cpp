#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
 string str = "vishal verma is good boy. he is also a pro programmer ";
 stringstream ss(str);
 string temp;
 vector<string>v;
 while(ss>>temp){
    v.push_back(temp);
 }
// vector print 
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<endl;
// }
cout<<endl;
sort(v.begin(), v.end());
// vector print 
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<endl;
// }
int maxcount = 1;
int count =1;
for(int i=0; i<v.size(); i++ ){
    if(v[i] ==v[i-1]) count++;
    else count =1;
    maxcount = max(maxcount, count);

}
count =1;
for(int i=0; i<v.size(); i++ ){
    if(v[i] ==v[i-1]) count++;
    else count =1;
   if(count ==maxcount){
    cout<<v[i]<<" "<<maxcount<<endl;
   }

}
 

}