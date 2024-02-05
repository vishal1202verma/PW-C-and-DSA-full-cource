#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge (vector<int>&a, vector<int>&b, vector<int>&res){
      int i=a.size()-1; 
      int j=b.size()-1; 
      int k=0;
      while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            res[k] = a[i];
            k++;
            i--;
        }
        else{ // b[j]>a[i]
        res[k] = b[j];
        k++;
        j--;
        }
         if(i>a.size()){ //a vector is end
        while (i >= 0) {
         res[k++] = a[i--];
         }
         }
         if(j>b.size()){ // b vector's element is end
          while (j >= 0) {
            res[k++] = b[j--];
             }
         }
        //      while(j<b.size()){
        //         res[k] = b[j];
        //         k++;
        //         j--;


        //      }
        // }
        
        //  while(i<a.size()){
        //     res[k] = a[i];
        //     k++;
        //     i--;

        //  }

        // }

      } 
}


int main (){
int arr1[] = {2, 3, 4, 5 ,6};
int n1 = sizeof(arr1)/sizeof(arr1[0]);
vector<int>a(arr1, arr1+n1);
int arr2[] = {8,7,9,10,11,12};
int n2 =  sizeof(arr2)/sizeof(arr2[0]);
vector<int>b(arr2, arr2+n2);
vector<int>res(n1+n2);
merge(a, b ,res);
for(int i=0; i<res.size(); i++){
    cout<<res[i]<<" "; 
}



}