#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of rows :";
cin>>n;
int a =1 ;
for(int i=1; i<=n; i++)
{ 
    if(i%2 != 0) a=1;// row no odd
    else a =0; //row no even
     for(int j=1; j<=i; j++){
        cout<<a;
        // fliping
        if(a==1) a=0;
        else a=1;
     }
    cout<<endl;
}
}