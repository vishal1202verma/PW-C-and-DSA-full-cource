#include<iostream>
using namespace std;
int main(){
// string decalration and initilization
// char str[5] = { 'a', 'b', 'c', 'd', };
char str[5] = "abcd";
for(int i=0; i<5; i++){
    cout<<str[i]<<" ";
}
cout<<str;
cout<<"my name is vishal"<<endl;
cout<<(int)(str[0])<<endl;
cout<<int(str[0]);


}