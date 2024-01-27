#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){ // sr = starting row, sc = starting column, er = end row, ec  = end column 

// base case  
   if(sr>er || sc>ec) return 0;
   if(sr == er && sc == ec) return 1;
   int rightways = maze(sr, sc+1, er, ec);
   int downways = maze(sr+1, sc, er, ec);
   int totalways = rightways + downways;
   return totalways;
   

}
int main() {
    cout<<"this is the ways of reching the destination :"<<maze(0,0,2,2);

}