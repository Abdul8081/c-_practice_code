#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> org, int idx, vector<int> ans, vector<vector<int>> &anss, bool flag){
    if(idx==org.size()){
        anss.push_back(ans);
        return;
    }
    int x = org[idx];
    if(org.size()==1){
        if(flag==1) f(org, idx+1, ans, anss, 1);
        ans.push_back(x);
        f(org, idx+1, ans, anss, 1);
        anss.push_back(ans);
        return;
    }
    int y = org[idx+1];
    if(y==x){//duplicate
        if(flag==1) f(org, idx+1, ans, anss, 1);
        ans.push_back(x);
        f(org, idx+1, ans, anss, 0);
    }
    else{//no duplicate
        if(flag==1) f(org, idx+1, ans, anss, 1);
        ans.push_back(x);
        f(org, idx+1, ans, anss, 1);
    }
}
int main(){
    vector<int> org = {1,1,2};
    vector<int> ans;
    vector<vector<int>> anss;
    f(org, 0, ans, anss, 1);

    for(int i=0;i<anss.size();i++){
        for(int j=0;j<anss[i].size(); j++){
            cout<<anss[i][j]<<" ";
        }cout<<endl;
    }
}