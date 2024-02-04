#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> nums, vector<int> v, int idx, vector<vector<int>> &ans, int k){
    if(idx==nums.size()){
        if(v.size()==k) ans.push_back(v);
        return;
    }
    f(nums, v, idx+1, ans, k);
    v.push_back(nums[idx]);
    f(nums, v, idx+1, ans, k);
}
int main(){
    //finding all the sequence of k lenght
    vector<int> nums = {1,2,3,4,5};
    vector<int> v;
    vector<vector<int>> ans;
    int k = 3;
    f(nums, v, 0, ans, k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
