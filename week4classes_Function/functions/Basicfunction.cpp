#include<iostream>
using namespace std;
// void greeting(){
//     cout<<"Good Morning"<<endl;
//     cout<<"Have a nice day !"<<endl;
//     }

void starTraingle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }

}
void greeting (){
    cout<<"hello verma ji !";
}

int main(){
 
   starTraingle(3);
   starTraingle(4);
   starTraingle(5);
   greeting();
   
}

