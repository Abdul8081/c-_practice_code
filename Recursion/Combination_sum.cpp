#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> &v, vector<int> ans, int target, int idx, vector<vector<int>> &anss){
    if(target==0){
        anss.push_back(ans);
        return;
    }
    if(target<0) return;
    for(int i=idx;i<v.size();i++){
        ans.push_back(v[i]);
        f(v, ans, target-v[i], i, anss);
        ans.pop_back();
    }
}
int main(){
    //printing of all the combination sum equal to target 
    vector<int> v = {2,3,5};
    vector<vector<int>> anss;
    f(v, {}, 8, 0, anss);
    for(int i=0;i<anss.size();i++){
        for(int j=0;j<anss[i].size();j++){
            cout<<anss[i][j]<<" ";
        }
        cout<<endl;
    }
}