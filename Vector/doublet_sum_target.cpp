#include<iostream>
#include<vector>
using namespace std;
void doublet_sum_indx(vector<int> v,int x){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((v[i]+v[j])==x) cout<<"["<<i<<","<<j<<"]"<<endl;
        }
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
    int x; cin>>x;
    doublet_sum_indx(v,x);
}