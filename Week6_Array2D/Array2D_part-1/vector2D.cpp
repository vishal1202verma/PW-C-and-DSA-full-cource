#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// leetcode 876 queston 
int main(){
  vector<vector<int>> v;
 int m =v.size();//rows
 int n = v[0].size();// columns 
int t[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        t[i][j]= v[j][i]; 
    }
}

}

