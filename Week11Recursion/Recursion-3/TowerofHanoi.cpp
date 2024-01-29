#include<iostream>
using namespace std;
void hanoi(int n , char s, char h, char d){
       if(n==0) return;
       hanoi(n-1, s, d, h);
       cout<<s<<"--> "<<d<<endl;
       hanoi(n-1, h, s, d);
       return;


}


int main (){
int n = 4;
cout<<"vishal verma ji !"<<endl;
hanoi(n , 'A', 'B', 'C');



}