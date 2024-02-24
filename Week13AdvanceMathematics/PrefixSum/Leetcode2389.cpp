#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = queries.size();
        vector<int>ans(m);
        // now we will create a prefix sum of nums
        int prefix[n];  // [1,3,7,12]
        for(int i=1; i<n; i++){
            nums[i] = nums[i] + nums[i-1];
        } 
        // now we will travle each query for selecting length of ans
        for(int i=0; i<m; i++){// this is for query
            int len = 0;  
            for(int j=0; j<n; j++){ // this is for the nums prefix // [1,3,7,12]
                 if(nums[j]>queries[i]) break;
                 len++;

            }
            ans[i] = len;
        }       
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
            
        }
    }

    int main (){
    // Input: nums = [4,5,2,1], queries = [3,10,21]
    // Output: [2,3,4]
    int a[] = {4,5,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>nums(a, a+n);
    int b[] = {3,10,21};
    int m = sizeof(b)/sizeof(b[0]);
    vector<int>queries(b, b+m);
    answerQueries(nums, queries);





    }
