#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
 bool check( int speed,vector<int>& piles, int h ){
       long long count = 0;
       int n  = piles.size();
       for(int i=0; i<n; i++){
            // if(count>h) return false;
           if(speed>=piles[i]) count ++;
           else if (piles[i]%speed == 0) count  += (long long)piles[i]/speed;
           else count += (long long )piles[i]/speed+1; // very very important
       }
       if(count>h) return false;
       else return true;
   }


    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        // int minspeed = k;
        int max = INT_MIN; // max = hi bnary search 
        for(int i=0;  i<n; i++){
            if(max<piles[i]){
                max = piles[i];
            }
        }
        int lo = 1;
        int hi = max;
       
        int ans = -1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
           
           if(check(mid, piles, h) == true){
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
    // piles = [3,6,7,11], h = 8
    int h = 8;
    vector<int>piles;
    piles.push_back(3);
    piles.push_back(6);
    piles.push_back(7);
    piles.push_back(11);
    cout<<"the minimum speed of the eating by koko is :";
    cout<<minEatingSpeed(piles, h);
    



    }