#include<iostream>
#include<queue>
using namespace std;
int main (){
int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
int n = sizeof(arr)/sizeof(arr[0]);
// -4 -4 -7 -9 -9 -9 0 -1
vector<int>ans;
queue<int>q;
int k = 3; // it will tell us the size of windows
// we will find negative numbers and then we will push index of neg num into the queue
for( int i=0; i<n; i++){
    if( arr[i] <0){
        q.push(i);
    }
}
// now we traveon the window of arr and then find the first neg num using queue
int i=0;
while( i+k<=n){
     while(q.size()>0 && q.front()<i) q.pop();
     if( q.size() ==0 || q.front() >=i+k) ans.push_back(0);
     else ans.push_back(arr[q.front()]);
     i++;

}
// now we will print answer
for( int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}


}