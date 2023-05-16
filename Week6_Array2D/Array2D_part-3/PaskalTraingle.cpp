#include<iostream>
#include<vector>
using namespace std;
int main(){
int numrows = 5;
vector<vector<int>>v;
for(int i=1; i<=5; i++){
    vector<int>a(i);
    v.push_back(a);
}
// generation
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        if(j==0 || i==j){
            v[i][j]  =1;
        }
        else{
            v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
}
cout<<endl;
// print
for(int i=0; i<5; i++){
    for(int j=0; j<=i; j++){
        cout<<v[i][j]<<" ";
    }
cout<<endl;
}

}