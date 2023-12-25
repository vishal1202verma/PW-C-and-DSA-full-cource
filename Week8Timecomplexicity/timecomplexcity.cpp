#include<iostream>
using namespace std;
int main (){
    int n;
    int c =0;
for(int i=0; i<n; i+=i){
  c++;
}
// timecomplexcity = total no i = 1,2,4,6,8,-------n;
// i = 2^0, 2^1, 2^2,---- 2^x;
// total no of terms = x+1;
// x+1 = 2^x;
// so T.C.  = O(log n +1);
// T.C.= O(n);

}