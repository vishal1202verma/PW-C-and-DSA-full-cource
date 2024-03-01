#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
            int n = customers.size();
            int m =  grumpy.size();
            int k = minutes;
            int maxloss = 0;
            int prevloss =0;
            for(int i=0; i<k; i++){
                 if(grumpy[i] == 1){
                     prevloss += customers[i];
                 }
            }
            maxloss = prevloss;
            int maxId = 0;
            int i= 1;
            int j = k;
            while(j<n){
                int currloss = prevloss;
                if(grumpy[j] == 1) currloss += customers[j];
                if(grumpy[i-1] == 1) currloss -= customers[i-1];
                if(maxloss<currloss){
                    maxloss = currloss;
                    maxId = i;
                }
                    prevloss = currloss;
                    i++;
                    j++;
            }
           // filing zeros in the gruppmy array window
           for(int i=maxId; i<maxId+k; i++){
               grumpy[i] = 0;

           }
           // maximum satisfaction
           int sum =0;
           for(int i=0; i<n; i++){
               if(grumpy[i] ==0) sum += customers[i];
                 

           }
           return sum;

     }


    int main (){
    int arr [] = {1,0,1,2,1,1,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>customers(arr, arr+n);
    int brr[] = {0,1,0,1,0,1,0,1};
    int m = sizeof(brr)/sizeof(brr[0]);
    vector<int>grumpy(brr, brr+m);
    int minutes = 3;
    cout<<maxSatisfied(customers, grumpy, minutes);
    




}