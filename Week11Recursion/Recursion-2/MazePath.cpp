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
int maze2(int row, int column){
    if(row<1 || column<1) return 0;
    if(row ==1 && column ==1) return 1;
    int rightways = maze2(row , column-1);// right
    int downways = maze2(row-1, column); // down 
    int totalways = rightways + downways;
    return totalways;
}
void printpath (int sr, int sc, int er, int ec, string s  ){
   if(sr>er || sc>ec) return;
   if(sr == er && sc == ec){
    cout<<s<<endl;
    return;
   }
   printpath(sr, sc+1, er, ec, s+'R'); // right
   printpath(sr+1, sc, er, ec , s+'D'); // down 
   return;

} 

int main() {
    cout<<"vishal verma ji wriiten this code -->"<<endl;
    cout<<" this is the no of ways for reaching the destination :"<<maze2(3, 3);
    // printpath(1, 1,3,3, "");
                                
                         
}