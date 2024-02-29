#include<iostream>
#include<vector>
using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     int ans = n*fact(n-1);
// }
int main (){
int n = 25;    
vector<int>factorial(n+1, 1);
int MOD = 1000000000 +7;
for(int i=2; i<= n; i++){
    factorial[i] = ( (i% MOD )+ (factorial[i-1]%MOD) ) % MOD;
    
}




}