#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>fun(int ind,vector<vector<int>>&res,vector<int>nums){
    if(ind>=nums.size()-1){
        return res;
    }
    res[ind].push_back(nums[ind]);
    fun(ind+1,res,nums);
    res[ind].pop_back();
    fun(ind+1,res,nums);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>res;
    vector<vector<int>>ans= fun(0,res,nums);
    return ans;
}
int main(){
    return 0;
}