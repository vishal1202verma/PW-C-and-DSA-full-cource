#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
 bool check( long long  mid, vector<int>& time, int totalTrips){
           long long trips = 0;
           int n = time.size();
           for(int i=0; i<n; i++){
              trips += (long long )mid/time[i];
            }
           if(trips<totalTrips){
               return false;
           }
           else{
               return true;
           }
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
          int n = time.size();
          int mx = -1;
          long long  ans = -1;
          for(int i=0; i<n; i++){
             mx = max(mx, time[i]);
          }
          
          // binary serach on ans;
          long long lo = 1;
          long long hi = (long long )mx*(long long)totalTrips;
          while(lo<=hi){
              long long  mid = lo +(hi-lo)/2;
              if(check(mid, time, totalTrips) == true){
                  ans = mid;
                  hi = mid -1;
              }
              else{
                  lo = mid +1;
              }
              
               
          }
        return ans;

    }
    int main (){
    // Input: time = [1,2,3], totalTrips = 5
    // Output: 3
    int totalTrips = 5;
    vector<int>time;
    time.push_back(1);
    time.push_back(2);
    time.push_back(3);
    cout<<"the mimimum time to complete the trips is :";
    cout<<minimumTime(time, totalTrips);


    }