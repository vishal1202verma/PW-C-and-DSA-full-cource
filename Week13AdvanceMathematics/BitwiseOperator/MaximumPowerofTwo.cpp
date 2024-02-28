// ginev an integer n, find the maximm power of two that is smaller than n.
#include<iostream>
using namespace std;
int max_powerof_two(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    // n = n | (n >> 32);
    return (n+1)/2;
}
int main (){
    int x = 24;
    int temp;
    while(x !=0){
     temp = x;
     x = x & (x-1);

    }
    cout<<temp<<" "<<endl; 
    cout<<max_powerof_two(24);
    



}