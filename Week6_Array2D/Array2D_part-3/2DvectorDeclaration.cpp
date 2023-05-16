#include<iostream>
#include<vector>
using namespace std;
int main(){
  // int arr[3][4];
  vector<vector<int>>v(3, vector<int>(4 ,20)); // 3 rows and 4 column vector with 2 initialize value
  cout<<v.size()<<endl;
  cout<<v[2][2]<<endl;
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
                            
  }
         
}