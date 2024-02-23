#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
     int n = satisfaction.size();
     sort(satisfaction.begin(), satisfaction.end());
     int sufix[n];
     sufix[n-1] = satisfaction[n-1];
     for(int i=n-2; i>=0; i--){
         sufix[i] = sufix[i+1] + satisfaction[i];
     }
     // find the pivot idx
     int idx =-1;
     for(int i=0; i<n; i++){
         if(sufix[i]>=0){
             idx = i;
             break;
         }
     }
     if( idx == -1) return 0;
     // max sum of life-time cofficient
     int x = 1;
     int maxSum = 0;
     for(int i=idx; i<n; i++){
         maxSum += (satisfaction[i]*x);
         x++;

     }
     return maxSum; 
                    
    }
    int main (){
    int a[] = {-1,-8,0,5,-9};    
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>satisfaction(a, a+n);
    for(int i=0 ;i<n; i++){
        cout<<satisfaction[i]<<" ";
    }
    cout<<endl;  
    cout<<maxSatisfaction(satisfaction);
    

    }