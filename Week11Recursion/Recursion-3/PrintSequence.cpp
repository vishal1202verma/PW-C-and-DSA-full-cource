#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void PrintSubSequence(int arr[], int n, int idx, vector<int> ans, int k){
 // base case 
 if(idx == n){
    if(ans.size() == k){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
    return;
 }
 if(ans.size()+ (n-idx)<k) return; //time cimplexcity kamm ho  jayegi00000 
PrintSubSequence(arr, n, idx+1, ans, k);
ans.push_back(arr[idx]);
PrintSubSequence(arr, n, idx+1, ans, k);

}

int main (){
    int arr[] = {1, 2, 3, 4 ,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    PrintSubSequence(arr, n, 0, v, 3);

    
}