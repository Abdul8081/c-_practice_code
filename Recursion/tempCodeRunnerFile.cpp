#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> nums, int idx, vector<int> ans, vector<vector<int>> &fans){
    if(idx==nums.size()){
        fans.push_back(ans);
        return;
    }
    f(nums, idx+1, ans, fans);