#include<iostream>
using namespace std;
int main (){
int arr[]  = {2,2,4,1,5,1,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);
int ans = 0;
for(int i=0; i<n; i++){ // T.C. =  O(n);
    ans = ans ^arr[i];
}
cout<<ans;
return 0;

}