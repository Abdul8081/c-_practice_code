#include<iostream>
#include<vector>
using namespace std;
void doublet_sum_indx(vector<int> &v, vector<int> &cv){
    int n = v.size();
    for(int i=0;i<n;i++){
        cv[n-i-1] = v[i];
    }
    for (int i = 0; i < n; i++){
        cout<<cv[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    vector<int>cv(n);
    doublet_sum_indx(v,cv);
}