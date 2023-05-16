// Write a program to reverse the array withput using extra array 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display (vector<int>&a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
int main(){
vector<int>v1;
v1.push_back(1);
v1.push_back(6);
v1.push_back(2);
v1.push_back(3);
v1.push_back(7);
v1.push_back(4);
display(v1);

// reverse //
// int i=0;
// int j=v1.size()-1;
// while(i<j){
//     //swap of i and j
//     int temp = v1[i];
//     v1[i]= v1[j];
//     v1[j] = temp;
//     i++;
//     j--;


// }
reverse(v1.begin(), v1.end());
display(v1);

}
