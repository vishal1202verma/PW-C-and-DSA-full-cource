#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
int partiiton(int a[], int si, int ei){
 int pivot = a[(si+ei)/2];
 int count = 0;
 for(int i=si; i<=ei; i++){
    if( i == (si+ei)/2) continue;
    if(a[i]<=pivot) count++;
 }
 int pivotindx = count+si;
 swap(a[(si+ei)/2], a[pivotindx]);
 int i = si;
 int j= ei;
 while(i<pivotindx && j>pivotindx){
      if(a[i]<=pivot) i++;
      if(a[j]>pivot) j--;
      else if (a[i]>pivot && a[j]<= pivot){
        swap(a[i], a[j]);
        i++;
        j--;
      }
 }
 return pivotindx;


}
int kthSmallest(int a[], int si, int ei, int k ){
 int pivotIdx = partiiton(a, si, ei);
 if(pivotIdx+1 == k) return a[pivotIdx];
 else if(pivotIdx+1 <k) return kthSmallest(a,  pivotIdx+1,ei, k);
 else return kthSmallest(a, si, pivotIdx-1, k);

}

using namespace std;
int main (){
int a[] = {5,1,8,2,7,6,3,4,9};
int n = sizeof(a)/sizeof(a[0]);
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";

}
int k = 3;
// printing the kath smallest element
cout<<kthSmallest(a, 0, n-1, k);


}