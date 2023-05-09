#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;

    v.push_back(6);
    v.push_back(9);
    v.push_back(4);
    v.push_back(10);
    v.push_back(11);
    cout<<v.at(2);
    for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";

}
cout<<endl;



}
