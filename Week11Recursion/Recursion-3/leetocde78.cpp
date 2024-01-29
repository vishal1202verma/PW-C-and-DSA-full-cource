#include<iostream>
#include<vector>
using namespace std;
  void helper(vector<int>&nums, vector<int> ans, vector<vector<int>>&finalans ,int idx){
           if(idx == nums.size()){
            //    finalans.push_back(ans);
               for(int i=0; i<ans.size(); i++){
                     cout<<ans[i]<<endl;
               }
               return;
           }   
           helper(nums, ans, finalans, idx+1);
           ans.push_back(nums[idx]);
           helper(nums, ans, finalans, idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        vector<vector<int>> finalans;
        helper(nums, ans, finalans, 0);
        // ans.push_back({});
        // ans.push_back({});
        // ans.push_back(nums);
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] != 0){
        //     ans.push_back({nums[i]});
        //     }
        //     for(int j = i + 1; j < n; j++) {
        //          if(nums[i] != nums[j] && nums[j] != nums[i]){
        //         vector<int> temp = {nums[i], nums[j]};
        //         ans.push_back(temp);
        //          }
        //     }
        // }
        return finalans;
    }
    int main (){
       vector<int>nums;
       nums.push_back(1);
       nums.push_back(2);
       nums.push_back(3);
       subsets( nums);
        
    }