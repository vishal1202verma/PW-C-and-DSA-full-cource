#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int trap (vector<int> height){
   // 1.)finding first prev greates array
   int n = height.size();
   int prev[n];
   prev[0] = -1;
   int max = height[0];
   for(int i=1; i<n; i++){
        prev[i] = max;
     if(max<height[i]){
        max = height[i];                    
        }
   }

   //2.) next greatest  array
   int next [n];
   next[n-1] =-1;
   max = height[n-1];
   for(int i =n-2; i>0; i--){
      next[i] = max;
     if(max<height[i]){
        max= height[i];
     }
   }
  //3.) minimum array
  // minimum array --> prev array as a mini
  for(int i=0; i<n; i++){
    prev[i]= min(prev[i], next[i]);
  }

//   int mini[n];0
// //   mini[n]  =-1;
//   for(int i=0; i<n; i++){
//         mini[i] = min(prev[i], next[i]);

//   }
  // calculatting water 
  int water =0;
  for(int i=1; i<n-1; i++){
     if(height[i]<prev[i]){
        water += (prev[i] - height[i]);

     }
  }
  return;

}
                      

int main(){
cout<<"vishal verma ji !";

}