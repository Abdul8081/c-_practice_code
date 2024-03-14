#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> trv, vector<int> nums, int k, int idx){
    if(idx==nums.size()){ 
        for(int i=0;i<trv.size();i++){
            cout<<trv[i]<<" ";
        }
        cout<<endl;
        return;
    }
    f(trv, nums, k, idx+1);
    if(trv.size()==0){
        trv.push_back(nums[idx]);
        f(trv, nums, k, idx+1);
    }
    else if(trv[trv.size()-1] == nums[idx-1]){
        trv.push_back(nums[idx]);
        f(trv, nums, k, idx+1);
    }
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    vector<int> trv;
    int k=3;
    f(trv, nums, k, 0);
}