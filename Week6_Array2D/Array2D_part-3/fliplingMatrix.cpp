#include<iostream>
#include<vector>
using namespace std;
int matrixScore(vector<vector<int>>&grid){
   int rows = grid.size();
   int columns = grid[0].size();
   for(int i=0; i<rows; i++){
    if(grid[i][0] ==0){
        for(int j=0; j<columns; j++ ){
            if(grid[i][j] ==0) grid[i][j] =1;
            else grid[i][j] =0;
               
        }
    }
   }
   // flip the columns 
   for(int j=0; j<columns; j++){
    int noz =0;
    int noo = 0;
    for(int i=0; i<rows; i++){
        if(grid[i][j] ==0) noz++;
        else noo++;
    }
    if(noz>noo){
        for(int i=0; i<rows; i++){
            if(grid[i][j] ==0) grid[i][j] =1;
            else grid[i][j] =0;
        }
    }
   }

   int sum =0;
    for(int i=0; i<rows; i++){
        int x = 1;
        for(int j=columns-1; j>=0; j--){
            sum += grid[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}

int main (){
  vector<int>v1;
  v1.push_back(0);
  v1.push_back(0);
  v1.push_back(1);
  v1.push_back(1);

  vector<int>v2;
  v2.push_back(1);
  v2.push_back(0);
  v2.push_back(1);
  v2.push_back(0);

  vector<int>v3;
  v3.push_back(1);
  v3.push_back(1);
  v3.push_back(0);
  v3.push_back(0);
  
  vector<vector<int>>grid;
  grid.push_back(v1);
  grid.push_back(v2);
  grid.push_back(v3);
  cout<<endl;
  cout<<matrixScore(grid)<<" ";
  cout<<endl;

  
  

}