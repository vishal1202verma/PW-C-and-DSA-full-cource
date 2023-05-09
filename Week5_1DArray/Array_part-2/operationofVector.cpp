#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;// you  need not mention size
    v.push_back(6);
    v.push_back(9);
    v.push_back(4);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(34);
    v.push_back(15);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" " ;
    }
     
}
