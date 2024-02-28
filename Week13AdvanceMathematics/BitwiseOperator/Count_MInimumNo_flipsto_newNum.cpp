#include<iostream>
using namespace std;
int main (){
int x = 23;
int y = 31;
int z = (x ^ y); //    z = Nos  no of ones after the xor operation
int count =0;
while( z>0){
    count++;
    z = z & (z-1);
}
cout<<count; 

}