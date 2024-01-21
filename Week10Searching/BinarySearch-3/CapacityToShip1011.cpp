#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
 bool check(int mid, vector<int>& weights, int days){
       int n = weights.size();
       int m = mid;
       int count = 1; // count the no of days in travle
       for(int i=0; i<n; i++){
           if(m>=weights[i]){
               m -= weights[i];
           }
           else{
               count++;
               m = mid;
               m -= weights[i];
           }
       }
       if(count<=days) return true;
       else return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        // binary search for the capacity searching

        int sum = 0; // sum is hi of the binary serch
        for(int i=0; i<n; i++){
            sum += weights[i];
        }
        // max element of the array for low value of the binary serach
        int max = INT_MIN;
        for(int i=0; i<n; i++){
            if(max<weights[i]){
                max = weights[i];
            }
        } 
        // binary Search
        int lo = max; 
        int hi = sum;
        int Mincapacity = sum;
        while(lo<=hi){
            int mid  = lo +(hi-lo)/2;
            if(check(mid, weights,days)){
                Mincapacity = mid;
                hi = mid-1;
            }
            else{
                lo = mid +1;
            }

        }

           return Mincapacity;              

    } 
    int main (){
        // [1,2,3,4,5,6,7,8,9,10], days = 5 , output = 15;
    int days = 5;
    vector<int>weights;
    weights.push_back(1);
    weights.push_back(2);
    weights.push_back(3);
    weights.push_back(4);
    weights.push_back(5);
    weights.push_back(6);
    weights.push_back(7);
    weights.push_back(8);
    weights.push_back(9);
    weights.push_back(10);
    cout<<" the minimum capacity of the ship will be : ";
    cout<<shipWithinDays(weights, days);



    }