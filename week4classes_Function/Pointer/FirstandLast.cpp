#include<iostream>
using namespace std;
void find(int n, int*ptr1, int*ptr2){
    *ptr2 = n%10; // LastDigit
    while(n>9){
        n/=10;
        
    }
        *ptr1= n;
        return;
}
int main(){
int n;
cin>>n;
int firstDigit, Lastdigit;
int *ptr1 = &firstDigit, *ptr2= &Lastdigit;

find(n , ptr1, ptr2);
cout<<firstDigit<< " "<<Lastdigit;
       
   

}