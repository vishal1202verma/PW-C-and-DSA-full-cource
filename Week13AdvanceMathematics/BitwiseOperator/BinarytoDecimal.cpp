#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
      int n = binary.size();
      int result = 0;
      for(int i = n-1; i>=0; i--){
        char ch = binary[i];
        int num = ch - '0';      // typecasting char to num
        result  = result + num*(1 << (n- i -1)); // 1 << will gives 2's power  
      }
      return result;

}
int main (){
string str;
cout<<"Enter any Binary Numbers :";
cin>>str;
cout<<"Decimal :"<<binary_to_decimal(str);




return 0;

}