#include<iostream>
#include<climits>
using namespace std;
// void RemoveChar(string ans, string original){
//     if(original.length() == 0){
//         cout<<ans;
//         return;
//     }
//      char ch = original[0];
//      if( ch == 'a'){
//         RemoveChar(ans, original.substr(1));

//      }
//      else{
//         RemoveChar(ans+ch, original.substr(1)); // append the ch into ans string 
//      }
// }

void RemoveChar(string ans, string original, int idx){
    // base condition 
    if(original.length() == 0){
        cout<<ans;
        return;
    }
     char ch = original[idx];
     if( ch == 'a'){
        RemoveChar(ans, original, idx+1);

     }
     else{
        RemoveChar(ans+ch, original, idx+1); // append the ch into ans string 
     }
}
int main (){
    string str = "Vishal Verma ";
    RemoveChar(" ", str, 0);
    // for(int i=0; i<str.size(); i++){
    //     if(str[i] != 'V'){
    //         s = s+str[i];
    //     }
    // }
    // cout<<s;
           

}