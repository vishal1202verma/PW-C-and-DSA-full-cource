#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);

vector<int>v2;
v2.push_back(3);
v2.push_back(4);

vector<int>v3;
v3.push_back(6);
v3.push_back(7);
v3.push_back(8);
v3.push_back(9);
v3.push_back(10);

vector<vector<int>>v;// {{1,2, 3}, {3, 4}, {6, 7, 8, 9 ,10}}
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;

}

}
