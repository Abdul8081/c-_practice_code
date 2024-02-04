#include<iostream>
#include<vector>
#include<set>
using namespace std;
void f(vector<int> nums, int idx, vector<int> v, set<vector<int>> &anss){
    //base case
    if(idx==nums.size()){
        anss.insert(v);
        return;
    }
    f(nums, idx+1, v, anss);
    v.push_back(nums[idx]);
    f(nums, idx+1, v, anss);
}
int main(){
    vector<int> nums = {1,1,2};
    vector<int> v;
    vector<vector<int>>ans;
    set<vector<int>> anss;
    f(nums, 0, v, anss);

    for(auto x : anss){
        ans.push_back(x);
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}