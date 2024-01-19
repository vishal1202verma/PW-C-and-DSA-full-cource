#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // x is the target
        // S.C. = O(1);
        // T.C. = O(logn + K(logk))
        int n = arr.size();
        vector<int>ans(k); // k elements to inseterted
        // case-1 x<arr[0]
        if(x<arr[0]){
            for(int i=0; i<k; i++){
                ans[i] = arr[i];
            }
            return ans;
        }
        // case-2 , arr= {1 2 3 4 5 }, x = 7, k = 3 
        if(x>arr[n-1]){
            int i = n-1;
            int j = k-1;
            while(j>=0){
                ans[j] = arr[i];
                j--;
                i--;
            }

        }
        // binary serach case-3
        int lo =0;
        int hi = n-1;
        int idx =0;// reprenseting the current indx of ans
        int mid = -1;
        bool flag = false; // if x is present in the array 
        while(lo<=hi){
            mid = lo +(hi-lo)/2;
            if(arr[mid] == x){
                flag = true; // present
                ans[idx] = arr[mid];
                idx++;
                break; 
            } 
            else if (arr[mid]>x){
                hi = mid-1;
            }
            else{
                lo = mid +1;
            }
        }
        int lb = hi; // lower bound
        int hb = lo; // upper bound
        if(flag == true){
            lb = mid-1;
            hb = mid +1;
        }
        while(idx<k && lb>=0 && hb<=n-1){
             int d1 = abs(x - arr[lb] ); // d1 = differnce 1 of x - arr[lb]
             int d2 = abs(x - arr[hb]); // d2 = differnce2 
             if(d1<=d2){
                 ans[idx] = arr[lb];
                 lb--;
             }
             else{ // d1< d2
                ans[idx] = arr[hb];
                hb++;
                
             }
             idx++;

        }  
        if(lb<0){
            while(idx<k){
                ans[idx] = arr[hb];
                hb++;
                idx++;
            }
        }
        if(hb>n-1){
            while(idx<k){
                ans[idx] =arr[lb];
                lb--;
                idx++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;

    }


int main (){
vector<int> arr;
int k = 4;
int x = 3;
// Input: arr = [1,2,3,4,5],
// Output: [1,2,3,4]
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
findClosestElements(arr, k, x);




}