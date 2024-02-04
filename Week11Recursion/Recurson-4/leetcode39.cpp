#include<iostream>
#include<vector>
using namespace std;
 void helper(vector<int>& candidates, int target ,vector<int>ans, int idx){
        int n = candidates.size();
        if(idx == n) {
            return;
        }
        helper(candidates, target, ans, idx+1);
        ans.push_back(candidates[idx]); 
        helper(candidates, target, ans, idx+1);
        return ;

 }
  
int main (){
vector<int>condidates;
condidates.push_back(1);
condidates.push_back(2);
condidates.push_back(3);
int target =6;
vector<int>ans;
helper(condidates, target, ans, 0);
 for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
           }



}  