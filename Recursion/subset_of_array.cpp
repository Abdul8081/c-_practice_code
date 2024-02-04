#include<iostream>
#include<vector>
using namespace std;
void f(int arr[], int n, int idx, vector<int> ans, vector<vector<int>> &anss){
    if(idx==n){
        anss.push_back(ans);
        return;
    }
    f(arr, n, idx+1, ans, anss);
    ans.push_back(arr[idx]);
    f(arr, n, idx+1, ans, anss);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>anss;
    vector<int> ans;
   f(arr, n, 0, ans,anss);
   for(int i=0;i<anss.size();i++){
        for(int j=0;j<anss[i].size();j++){
            cout<<anss[i][j]<<" ";
        }
        cout<<endl;
   }
}