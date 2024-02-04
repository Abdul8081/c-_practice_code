#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> v, int idx, vector<int> ans){

    if(idx==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    f(v,idx+1,ans);
    ans.push_back(v[idx]);
    f(v,idx+1,ans);
}
int main(){
    vector<int> v = {1,2,3};
   
    vector<int> ans;
    f(v,0,ans);
}