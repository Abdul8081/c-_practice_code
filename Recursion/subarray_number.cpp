#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> nums, int idx, vector<int> ans){
    if(idx==nums.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    f(nums, idx+1, ans);
    if(ans.size()==0) {
        ans.push_back(nums[idx]);
        f(nums, idx+1, ans);
    }
    else if(nums[idx-1]==ans[ans.size()-1]){
        ans.push_back(nums[idx]);
        f(nums, idx+1, ans);
    }
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans;
    f(nums, 0, ans);
}