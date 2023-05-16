#include<iostream>
#include<vector>
#include<algorithm>
// #include<cmath>
using namespace std;
void change(vector<int> &a){
    a[0] = 100;
}

int main(){
vector<int>v;

    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(10);
    v.push_back(11);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(10);
    v.push_back(11);
    int x = 6;
    int idx =-1;
    // for(int i=0; i<v.size(); i++){
    //     if( v[i] ==x) idx = i;

    // }
    // cout<<"index of last of x is :"<<idx;
    for(int i =v.size()-1; i>=0; i--){
        if(v[i] ==x){
            idx =i;
            break;
        }
    }
    cout<<idx;



}