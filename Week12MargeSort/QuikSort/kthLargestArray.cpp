#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main (){
vector<string>nums;
nums.push_back("3");
nums.push_back("6");
nums.push_back("7");
nums.push_back("10");
for(int i=0; i<nums.size(); i++){
    cout<<nums[i]<<" ";
}
cout<<endl;
sort(nums.begin(), nums.end()-1);

for(int i=0; i<nums.size(); i++){
    cout<<nums[i]<<" ";
}


 }