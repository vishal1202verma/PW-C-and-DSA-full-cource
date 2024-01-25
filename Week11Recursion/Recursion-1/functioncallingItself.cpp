#include<iostream>
using namespace std;
void greed(int n ){
    if( n == 0) return;
    cout<<" Good Morning !"<<endl;
    greed(n-1); // function is calling itself this is recursion
    return;

}
int product(int a, int b){
    return a*b; // return means function kahatam 
}

int main (){
int n;
cout<<"Enter any integer n : ";
cin>>n;    
greed(n);
// for(int i=0; i<n; i++){
//     cout<<"Good morning !"<<endl;
// }



}