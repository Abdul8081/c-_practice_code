#include<iostream>
#include<vector>
using namespace std;
void f(string s, int n, vector<vector<string>> &ans){
    if(s.length()==n){
        ans.push_back({s});
        return;
    }
    f(s+'0', n, ans);
    f(s+'1', n, ans);
}
int main(){
    int n = 5;
    vector<vector<string>> ans;
    f("", n, ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}